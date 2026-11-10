/******************************************************************************               
 * ___________            _                 _       _ 
 *|_   _| ___ \          | |               (_)     | |
 *  | | | |_/ / __  _   _| |_ ___  ___ _ __ _  __ _| |
 *  | | |  __/ '_ \| | | | __/ __|/ _ \ '__| |/ _` | |
 *  | | | |  | |_) | |_| | |_\__ \  __/ |  | | (_| | |
 *  \_/ \_|  | .__/ \__,_|\__|___/\___|_|  |_|\__,_|_|
 *           | |                                      
 *           |_|                                      
 ******************************************************************************/

/******************************************************************************               
 * Travail à rendre : Un compte-rendu contenant les réponses à toutes les questions ci-dessous, ainsi que le code et les captures d'écran (oscilloscope)
 
 *1) Lire le code du programme et dessiner l'algorigramme correspondant au code.
     Utiliser le logiciel drawio.
 *2) Enregistrer le code avec un nom de fichier comportant votre nom, puis compiler ("vérifier") le code :
     Quelle est la taille du fichier .ino? Quelle est l'occupation mémoire de l'espace de stocage de la carte Arduino? et dans la mémoire dynamique? 
     Relier la carte Arduino au PC en USB et televerser le code.
 *3) Identifier les broches GND et TX de la carte Arduino. Expliquer leurs rôles.
 *4) Relier ces broches au premier canal d'entrée de l'oscilloscope, via un 
     cordon BNC puis régler l'oscilloscope (X,Y,trig) de manière à observer le
	   signal. Fournir une capture lisible d'une période compléte du signal.
 *5) Mesurer Tb la durée d'un bit, et déduire D le débit binaire correspondant, en bits/sec.
     Mesurer l'amplitude du signal.
 *6) Identifier sur la trame observée,  la succession de 1 et de 0, sous la forme 
     ..10 XXXXXXXX 10 YYYYYYYY 1..(remplacer les octets XXXXXXXX et YYYYYYYY par les valeurs lues)
 *7) Traduire les valeurs binaires XXXXXXXX et YYYYYYYY en hexadécimal, à l'aide
     de la table de conversion, en prenant en compte que les données sont envoyées en LSB.
     Expliquer la différence entre LSB et MSB.
 *8) A l'aide de la table ASCII, retrouver les deux caractères correspondant aux valeurs binaires relevées.
 *9) Modifier le contenu du tableau tab de manière à ce que la carte émétte les 
     caractères "GO ", suivi de votre nom. Founir l'extrait de code corrspondant à la modification.
 *10) Que signifie "UART"?
 *11) Remplacer l'oscilloscope par un picoscope et faire les réglages de façon à observer la trame.
      Fournir une capture d'écran
 *12) Utiliser la fonction Tools->Serial Decoding->Uart du logiciel picoscope pour décoder le message.
      Fournir une capture d'écran
 *13) Expliquer pourquoi, selon vous,  chaque octet émis est précédé d'un bit "0" et suivi d'un bit "1"
 ******************************************************************************/

//Declaration of a tab with two characters (1 character = 1 byte )
char tab[2] = {64+15,64+11};

//The setup function is executed only one time
void setup() 
{
  //Initialize serial link beetween Arduino board and PC at defined baudrate (i.e speed of the bits) : highest baud rate means lowest bit duration.
  Serial.begin(19200);
}

//The loop function loops forever (it is executed for ever and ever)
void loop() 
{
  Serial.write(tab); // Send "something" over Serial link
  delay(500);        // Wait the specified amount of milliseconds
}
