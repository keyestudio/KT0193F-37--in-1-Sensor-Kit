## 1.説明

![image1](media/KT0193F.png)

このセンサーキットには、アクティブブザーモジュール、5Vリレーモジュール、温湿度モジュールなど、マイクロコントローラーのプロジェクトで一般的に使用される37種類のセンサーモジュールが含まれています。様々なマイクロコントローラーやRaspberry Piに対応しています。

さらに、開発ボードに基づいた各センサーの詳細なプロジェクトを提供しており、配線方法、テストコードなどが含まれています。これにより、これらのセンサーモジュールをさらに理解し、インタラクティブなプロジェクトに応用することができます。

以下のプロジェクトでは、メインボードやその他のワイヤーはこのキットに含まれていませんのでご注意ください。ご自身でご用意いただく必要があります。

**チュートリアルとコードのダウンロードアドレス：** [KT0193F Tutorial](./code.7z)

## 2.コンポーネントリスト

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

## 3. ライブラリの追加方法

ライブラリとは？

[ライブラリ](https://www.arduino.cc/en/Reference/Libraries)は、センサー、ディスプレイ、モジュールなどへの接続を容易にするコードの集まりです。

例えば、内蔵のLiquidCrystalライブラリはLCDディスプレイとの通信を助けます。インターネット上には、ダウンロード可能な数百もの追加ライブラリがあります。

内蔵ライブラリとこれらの追加ライブラリの一部は、リファレンスに記載されています。

ライブラリのインストール方法

ここでは、ライブラリを追加する最も簡単な方法をご紹介します。

ステップ1：Arduino IDEを正常にダウンロードした後、Arduino IDEのアイコンを右クリックします。

以下に示す「ファイルの場所を開く」オプションを見つけます。

![IMG_256](media/f1d5fd3883e0997ca46dcf8513733c46.png)

ステップ2：そこに入り、ライブラリフォルダを見つけます。このフォルダにはArduinoのライブラリファイルが含まれています。

![image52](media/a67a5b5921be4dbc1b0ce92627111d15.png)

ステップ3：次に、このキットの[「libraries」](./libraries.7z)を見つけ、それをArduino IDEのライブラリフォルダにコピー＆ペーストするだけです。

次に、上記のライブラリをArduinoのライブラリにコピーします。以下に示すとおりです。

![image56](media/b5704ba7ce9103ecd236964e13f67865.png)

