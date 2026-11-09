/******************************************************************************               
 * ___________    ___   _____ _____ _____ _____ _____     _     _      
 *|_   _| ___ \  / _ \ /  ___/  __ \_   _|_   _|_   _|   | |   | |     
 *  | | | |_/ / / /_\ \\ `--.| /  \/ | |   | |   | | __ _| |__ | | ___ 
 *  | | |  __/  |  _  | `--. \ |     | |   | |   | |/ _` | '_ \| |/ _ \
 *  | | | |     | | | |/\__/ / \__/\_| |_ _| |_  | | (_| | |_) | |  __/
 *  \_/ \_|     \_| |_/\____/ \____/\___/ \___/  \_/\__,_|_.__/|_|\___|
 *                                                                  
 *
 ******************************************************************************/
																  
/******************************************************************************               
 *Practical Work : ASCII, numeration and serial communication.
  A report must be done. It must include answers, code extracts and screenshots (scope).
 *Q0 : Save this code with your name, i.e. ASCII_MYNAME.ino
 *Q1 : Explain with your own words what are comments in code and what they are used for.
 *Q2 : Upload "televerse" the code into arduino board and run the Serial Monitor (tools->Serial monitor).
 *     Find in the setup() function below the speed of transmission and set up the baud rate in the Serial Monitor.
 *     Describe what you see on serial monitor. 
 *Q3 : look at "Serial.print()" function in arduino reference documentation  (Read The Fabulous Manual) and 
 *     complete the code below in order to have decimal, hexadecimal and octal values printed on Serial Monitor. 
 *Q4 : Type "man ascii" in a Terminal :  What means the "ASCII" acronym? Explain what ASCII is. 
 *Q5 : Modify the code "if ( byteValue >=0 and byteValue <= 9)" in order to display 128 first values of ascii table
 *Q6 : Why the line 9 is not aligned with the others? What is the corresponding ASCII character? 
 *Q7 : With the "show timestamp" fonction of Serial Monitor enabled : 
 *     Measure Tslow, the duration of transmission of ascii characters at 9600BPS, 
 *     Change the code to have Serial link at Baudrate at 115200 BPS instead 
 *     of 9600 BPS. Change the value accordingly in Serial Monitor.
 *     Measure Tfast, the duration of transmission of ascii characters at 115200 BPS.
 *Q8 : Increase baud rate at maximum value. and measure new time of transmission.  
 *     Write a sentence that explains the link between baud rate and time of transmission.
 *Q9 : Measure duration of one single bit with a scope. The serial signal will
 *     be observed with a scope probe connected to "TX" pin of arduino board.
 *Q10: Calculate baud rate (bit frequency) from the duration found (f=1/T) and compare it to the baud
 *     rate set in the code. Are the baud rates equal or different? Explain why.
 ******************************************************************************/
 
//The setup function is executed only one time
void setup() {
  //Initialize serial link between Arduino board and PC at defined baudrate (i.e speed of the bits) : highest baud rate means lowest bit duration.
  Serial.begin(115200);
  Serial.print("Hello!");
}

//Initialize value of byte ("octet", in french)
int byteValue = 0;

//The loop function loops forever (it is executed for ever and ever)
void loop() 
{  
  //Only values matching the following condition will be displayed
  if ( byteValue >=0 and byteValue <= 9)   
  {  
    // prints value unaltered, i.e. the raw binary version of the byte.
    // The Serial Monitor interprets all bytes as ASCII, so 33 will show up as '!'
    Serial.write(byteValue);
    
    Serial.print(", dec: ");
    // prints value as string as an ASCII-encoded decimal (base 10).
    Serial.print(byteValue, DEC);
    
    Serial.print(", hex: ");
    // prints value as string in hexadecimal (base 16):
    Serial.print(byteValue, HEX);
    // TODO : Complete code here

    Serial.print(", oct: ");
    Serial.print(byteValue, OCT);
    // prints value as string in octal (base 8):
    // TODO : Complete code here
    
    Serial.print(", bin: ");
    // prints value as string in binary (base 2) also prints ending line break:
    Serial.println(byteValue, BIN);
    
    // go on to the next character
    byteValue++;
  }
}
