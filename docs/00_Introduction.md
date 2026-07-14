## 1.Description

![image1](media/KT0193F.png)

Ce kit de capteurs contient 37 types de modules de capteurs couramment utilisés dans les projets de microcontrôleurs, tels que le module de buzzer actif, le module de relais 5V, le module de température et d'humidité, etc. Il est compatible avec divers microcontrôleurs et Raspberry Pi.

De plus, nous fournissons des projets détaillés pour chaque capteur basés sur une carte de développement, y compris la méthode de câblage, le code de test, etc. Cela peut vous aider à mieux comprendre ces modules de capteurs et à les appliquer à des projets interactifs.

Veuillez noter que dans les projets suivants, la carte principale et les autres câbles ne sont pas inclus dans ce kit. Vous devrez les préparer vous-même.

**Adresse de téléchargement du tutoriel et du code :** [KT0193F Tutorial](./code.7z)

## 2.Liste des composants

| \\ | NAME | PHOTO | quantity |
|-----|------------------------------------|-------------------------------|----------|
| 1 | DIP RGB LED Module | ![img](media/wps1.jpg) | 1 |
| 2 | DIP RGB LED Module | ![image2](media/wps2.jpg) | 1 |
| 3 | SMD RGB LED Module | ![image3](media/wps3.jpg) | 1 |
| 4 | Passive Buzzer Module | ![image4](media/wps4.jpg) | 1 |
| 5 | Active Buzzer Module | ![image5](media/wps5.jpg) | 1 |
| 6 | Colorful flashing LED Module | ![image6](media/wps6.jpg) | 1 |
| 7 | Colorful flashing LED Module | ![image7](media/wps7.jpg) | 1 |
| 8 | Colorful flashing LED Module | ![image8](media/wps8.jpg) | 1 |
| 9 | Vibration Sensor Module | ![image9](media/wps9.jpg) | 1 |
| 10 | Photo Interrupter Module | ![image10](media/wps10.jpg) | 1 |
| 11 | Digital Push Button Module | ![image11](media/wps11.jpg) | 1 |
| 12 | Digital Tilt Sensor | ![image12](media/wps12.jpg) | 1 |
| 13 | Knock Sensor Module | ![image13](media/wps13.jpg) | 1 |
| 14 | Photoresistor module | ![image14](media/wps14.jpg) | 1 |
| 15 | Digital IR Transmitter Module | ![image15](media/wps15.jpg) | 1 |
| 16 | Flame Sensor | ![image16](media/wps16.jpg) | 1 |
| 17 | Linear Magnetic Hall Sensor | ![image17](media/wps17.jpg) | 1 |
| 18 | Metal Touch Sensor | ![image18](media/wps18.jpg) | 1 |
| 19 | Reed Switch Module | ![image19](media/wps19.jpg) | 1 |
| 20 | Digita Temperature Sensor | ![image20](media/wps20.jpg) | 1 |
| 21 | High-sensitivity sound sensor | ![image21](media/wps21.jpg) | 1 |
| 22 | Analog Sound Sensor | ![image22](media/wps22.jpg) | 1 |
| 23 | Digital IR Receiver Module | ![image23](media/wps23.jpg) | 1 |
| 24 | DHT11 Sensor | ![image24](media/wps24.jpg) | 1 |
| 25 | MMA8452Q Acceleration Sensor | ![image25](media/wps25.jpg) | 1 |
| 26 | DS1307 Clock Module | ![image26](media/wps26.jpg) | 1 |
| 27 | Infrared Obstacle Avoidance Sensor | ![image27](media/wps27.jpg) | 1 |
| 28 | HC-SR04 Blue Ultrasonic Sensor | ![image28](media/wps28.jpg) | 1 |
| 29 | PIR Motion Sensor | ![image29](media/wps29.jpg) | 1 |
| 30 | 5V 1 Channel Relay Module | ![image30](media/wps30.jpg) | 1 |
| 31 | Line Tracking Sensor | ![image31](media/wps31.jpg) | 1 |
| 32 | Joystick Module | ![image32](media/wps32.jpg) | 1 |
| 33 | Rotary Encoder Module | ![image33](media/wps33.jpg) | 1 |
| 34 | 4x4 membrane keypad | ![image34](media/wps34.jpg) | 1 |
| 35 | Water Sensor | ![image35](media/wps35.jpg) | 1 |
| 36 | Soil Humidity Sensor | ![image36](media/wps36.jpg) | 1 |
| 37 | 1602 LCD module | ![image37](media/wps37.jpg) | 1 |
| 38 | 10R resistor | ![image38](media/wps38.jpg) | 10 |
| 39 | 220R resistor | ![image39](media/wps39.jpg) | 10 |
| 40 | 1K resistor | ![image40](media/wps40.jpg) | 10 |
| 41 | 2K resistor | ![image41](media/wps41.jpg) | 10 |
| 42 | 10K resistor | ![image42](media/wps42.jpg) | 10 |
| 43 | 100K resistor | ![image43](media/wps43.jpg) | 10 |
| 44 | 1M resistor | ![image44](media/wps44.jpg) | 10 |
| 45 | 100R resistor | ![image45](media/wps45.jpg) | 10 |
| 46 | 330R resistor | ![image46](media/wps46.jpg) | 10 |
| 47 | 5.1K resistor | ![image47](media/wps47.jpg) | 10 |
| 48 | jump wires | ![image48](media/wps48.jpg) | 1 |
| 49 | 170 hole bread plate | ![image49](media/wps49.jpg) | 1 |
| 50 | M-F 20cm | ![image50](media/wps50.jpg) | 3 |
| 51 | potentiometer | ![image51](media/wps51.jpg) | 1 |

## 3. Comment ajouter une bibliothèque ?

Que sont les bibliothèques ?

Les [bibliothèques](https://www.arduino.cc/en/Reference/Libraries) sont une collection de code qui vous permet de vous connecter facilement à un capteur, un écran, un module, etc.

Par exemple, la bibliothèque intégrée LiquidCrystal aide à communiquer avec les écrans LCD. Des centaines de bibliothèques supplémentaires sont disponibles sur Internet en téléchargement.

Les bibliothèques intégrées et certaines de ces bibliothèques supplémentaires sont répertoriées dans la référence.

Comment installer une bibliothèque ?

Nous allons ici vous présenter la manière la plus simple d'ajouter des bibliothèques.

Étape 1 : Après avoir téléchargé l'IDE Arduino, vous pouvez faire un clic droit sur l'icône de l'IDE Arduino.

Trouvez l'option "Ouvrir l'emplacement du fichier" comme indiqué ci-dessous :

![IMG_256](media/f1d5fd3883e0997ca46dcf8513733c46.png)

Étape 2 : Entrez-y pour trouver le dossier des bibliothèques ; ce dossier contient les fichiers de bibliothèque Arduino.

![image52](media/a67a5b5921be4dbc1b0ce92627111d15.png)

Étape 3 : Ensuite, trouvez le dossier [« libraries »](./libraries.7z), il vous suffit de le copier et de le coller dans le dossier des bibliothèques de l'IDE Arduino.

![image53](media/070a54e428caee6c2361a39d6be4b82f.png)

![image54](media/da0e7c94005a4e3fdc9ca806116c5830.png)

![image55](media/695eab52a0f8f1868e3f25629f7f055a.png)

Copiez ensuite les bibliothèques ci-dessus dans les bibliothèques d'Arduino, comme indiqué ci-dessous :

![image56](media/b5704ba7ce9103ecd236964e13f67865.png)

## 