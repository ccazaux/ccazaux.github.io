//NMEA checksum calculation
//Can be verified at meme.au/nmea-checksum.html


#include <stdio.h>
#define TRUE  1
#define FALSE 0

unsigned char conv_hex_to_ASCII(unsigned char fourbits) // (0-9, A-F)
{
	switch (fourbits)
	{
		case 0x00: return ('0'); // ‘0’ code 0x30
		case 0x01: return ('1'); // ‘1’ code 0x31
		case 0x02: return ('2'); // ‘2’ code 0x32
		case 0x03: return ('3'); // ‘3’ code 0x33
		case 0x04: return ('4'); // ‘4’ code 0x34
		case 0x05: return ('5'); // ‘5’ code 0x35
		case 0x06: return ('6'); // ‘6’ code 0x36
		case 0x07: return ('7'); // ‘7’ code 0x37
		case 0x08: return ('8'); // ‘8’ code 0x38
		case 0x09: return ('9'); // ‘9’ code 0x39
		case 0x0a: return ('A'); // ‘A’ code 0x41
		case 0x0b: return ('B'); // ‘B’ code 0x42
		case 0x0c: return ('C'); // ‘C’ code 0x43
		case 0x0d: return ('D'); // ‘D’ code 0x44
		case 0x0e: return ('E'); // ‘E’ code 0x45
		case 0x0f: return ('F'); // ‘F’ code 0x46
		default:   return ('?');printf("\nERREUR!");   // ne doit pas arriver
	}
}

unsigned char check_frame(char *GPS_frame)
{
	unsigned char checksum, upper_nibble, lower_nibble, control;
	checksum = 0 ;
	++GPS_frame;	// passe le caractere '$'
	while (*GPS_frame != '*')
	{
		printf("\n%02X^%02X=%02X ",checksum,*GPS_frame,checksum ^ *GPS_frame);
		checksum = checksum ^ *GPS_frame;
		++GPS_frame;
	}
	upper_nibble = conv_hex_to_ASCII(checksum >> 4);
	lower_nibble = conv_hex_to_ASCII(checksum & 0x0f);
	GPS_frame++;	// passe le caractere '*'
	if(*GPS_frame==upper_nibble )
	{
	    printf("\nupper_nibble (premiere moitié de checksum) OK");
		GPS_frame++;
		if(*GPS_frame==lower_nibble)
		{control = TRUE ; printf("\nlower_nibble (seconde moitié de checksum) OK");}
		else
		{control = FALSE ; printf("\nlower_nibble (seconde moitié de checksum) KO!");}
	}
	else
	    {
	    printf("\nUpper_nibble (premiere moitié de checksum) KO!");
		control = FALSE ;
	    }
	return(control);
}

int main(int argc, char const *argv[])
{
	int result = FALSE;
	char frame1[] = "$GPVTG*52";
	char frame2[] = "$GPRMC*3Z"; //erreur : on suppose que seul le checksum est faux et vaut 4B
	char frame3[] = "$GPGLL,4916.45,N*3B";
	char frame4[] = "$GPGGA,223845.00,4927.4898,N,00010.7462,E,2,07,1.02,15.1,M,-1.2,M,0.1,0001*57";
	
	result = check_frame(frame3);
	printf("\ncheck_frame function with parameter %s returns value %d \n",frame3 ,result );
	
	return 0;
}


