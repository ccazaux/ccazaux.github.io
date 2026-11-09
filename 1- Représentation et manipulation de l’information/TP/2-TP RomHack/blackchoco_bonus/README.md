/*********************************************************************************************
 * Multiplication des potions
 * Les fichiers *.ff7 correspondent aux sauvegardes du célébre jeu Final Fantasy VII.
 * Les potions et les ethers sont des objets du jeu. Vous pouvez en avoir un certain nombre.
 * Ces nombres sont stockés dans les fichiers de sauvegarde, afin qu'à la reprise d'une partie,
 * les objets collectés ne soient pas perdus.
 * Ci-joint plusieurs fichiers : 
 ********************************************************************************************/

save00.ff7		Sauvegarde au début du jeu. On dispose de trois potions.
save00+1p.ff7		La même sauvegarde que save00, mais on a trouvé une potion supplémentaire
save00+2p.ff7		La même sauvegarde que save00, mais on a trouvé deux potions supplémentaires
save00_Xp_2eth.ff7	Cette fois, on a trouvé beaucoup de potions, et deux ethers...

La commande suivante permet de comparer les deux fichiers en hexadécimal :
colordiff <(xxd ./save00.ff7 ) <(xxd ./save00+1p.ff7 ) 

a) Faire une recherche et expliquer ce que font les commandes:
	colordiff
	xxd

b) En observant le résultat de cette commande, trouver les numéros de ligne qui ont été modifiées.
c) Donner le numéro de ligne et de colonne,(Une colonne = un octet) et déduire l'adresse du registre mémoire qui contient probablement le nombre de potions.
d) Confirmer avec une comparaison des fichiers save00.ff7 et save00+2p.ff7
e) Observez bien les valeurs qui sont différentes.
f) Trouver combien de potions contient la sauvegarde save00_Xp_2eth.ff7 
g) Identifier l'adresse exacte du l'octet qui contient le nombre d'ethers.
h) Bonus : Modifier le fichier de façon à obtenir 127 Ethers.




