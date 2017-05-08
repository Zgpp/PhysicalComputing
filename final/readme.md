#Apéritif
------------------------------------------------------------

##Spring 2017

A science experiment showing the health benefits of an alcoholic drink taken before a meal to stimulate the appetite. This project focuses on the cocktail drink, Negroni. For my final, I wanted to produce a liquid dispenser which switches on and off accompanied by LED lights that show the stages of the dispenser.

How it Works:
1. User pushes the button to initialize drink
2. The arduino will tell the 1st solenoid to open (Gin will dispense for 5 seconds); the 1st LED will light up
3. The 2nd solenoid will follow afterwards (Campari will dispense for 5 seconds); 2nd LED will light up
4. The 3rd solenoid will complete the drink (Sweet Vermouth will dispense for 5 seconds); 3rd LED will light up

Ingredients for Negroni:
* Tanqueray Gin
* Campari
* Sweet Vermouth

Electrical Components:
* Arduino Uno
* Breadboard
* Jumpwires
* 3 x Solenoid Valves
* 3 x Blue LEDs
* 3 x 560 Ohm Resistors
* 3 x Diodes
* 3 x TIP 120 Transistors
* 3 x 1k Ohm Resistors
* 6 x Alligator Clips
* 12v Power Supply

##Initial Testing: Getting the Solenoid to Open and Close

Once I got the first solenoid working properly, the next thing was to try and combine an LED into the system. Afterwards, I combined all three solenoids together with three LEDs. I noticed the LED works via the 5v power supply from the Arduino, not the 12v external power supply.

![001-testing-solenoid](https://cloud.githubusercontent.com/assets/21225598/25321865/ea4ce976-287f-11e7-827a-667f5e01b3f8.jpg)
<img width="480" alt="solenoid-test" src="https://cloud.githubusercontent.com/assets/21225598/25322361/4cc71596-2884-11e7-8a91-1ad219b5b406.png">
![002-testing-all-solenoids](https://cloud.githubusercontent.com/assets/21225598/25321947/6a03694c-2880-11e7-97cd-ff4f766e268c.jpg)
![003-testing-all-solenoids](https://cloud.githubusercontent.com/assets/21225598/25321987/ac6d55e0-2880-11e7-9a3f-ec169cc16d95.jpg)

The code below tested the opening and closing of the solenoids.

<img width="480" alt="three-solenoids-test-01" src="https://cloud.githubusercontent.com/assets/21225598/25322380/83832c1e-2884-11e7-8676-927598aed041.png">
<img width="480" alt="three-solenoids-test-02" src="https://cloud.githubusercontent.com/assets/21225598/25322409/bc63f7a2-2884-11e7-835c-20ea6578272f.png">

[Video: Testing the Solenoid](https://vimeo.com/214440852)

##Creating the Frame

With only two hands, I was having a difficult time testing the solenoids with all three bottles turned upside down. I decided to begin working on the frame to at least hold the bottles while I'm testing. I began by measuring the distance between each bottle (4 inches). With an additional inch on each side, the total frame is 14 inches wide and 18 inches in height.

Below is a sketch of my frame:

![004-creating-the-frame-sketch](https://cloud.githubusercontent.com/assets/21225598/25322017/f94cd7be-2880-11e7-82cb-009ea6ee9ada.jpg)
![005-creating-the-frame](https://cloud.githubusercontent.com/assets/21225598/25322208/dad4c146-2882-11e7-87c8-99b31530171e.jpg)

I drilled a hole through the spouts for the liquid to flow through the tubes from each bottle. 

![006-creating-the-frame](https://cloud.githubusercontent.com/assets/21225598/25322221/fc751666-2882-11e7-935e-6f575502beee.jpg)

Completion of the frame:

![007-creating-the-frame](https://cloud.githubusercontent.com/assets/21225598/25322243/2486175e-2883-11e7-97e4-daf37c643d17.jpg)

##Creating the Dispenser

After setting up the solenoids on the frame and re-wiring everything, I re-worked the code for the solenoids to release after 5 seconds. I wanted to incorporate a push button to initialize the Negroni cocktail.

![aperitif-01](https://cloud.githubusercontent.com/assets/21225598/25788268/c19faf62-3375-11e7-8268-1a2b5c4a73fe.jpg)
![aperitif-02](https://cloud.githubusercontent.com/assets/21225598/25788318/36aaf9ce-3376-11e7-8537-852848963e2e.jpg)

<img width="499" alt="button-test" src="https://cloud.githubusercontent.com/assets/21225598/25789991/6b23133c-3383-11e7-83ad-27806b5c7065.png">

![button-01](https://cloud.githubusercontent.com/assets/21225598/25789825/c51aeae2-3381-11e7-8758-35ee6f1f0368.jpg)
![button-03](https://cloud.githubusercontent.com/assets/21225598/25789897/83a3c5ec-3382-11e7-8241-3570525c6cd7.jpg)
![button-02](https://cloud.githubusercontent.com/assets/21225598/25789911/acfe46ce-3382-11e7-85a3-7c5cab6bd76f.jpg)

<img width="589" alt="negroni-test-01-01" src="https://cloud.githubusercontent.com/assets/21225598/25790112/27d8ca44-3384-11e7-9cc6-b11341009484.png">
<img width="589" alt="negroni-test-01-02" src="https://cloud.githubusercontent.com/assets/21225598/25790147/7152fe7e-3384-11e7-915c-807be495cc7b.png">

##Health Benefits of an Apéritif Cocktail:

<img width="600" alt="human-body-diagrams" src="https://cloud.githubusercontent.com/assets/21225598/25789382/4ce0359e-337e-11e7-80aa-e79f5b599edb.png">

##Showcase

![aperitif-showcase](https://cloud.githubusercontent.com/assets/21225598/25789134/34bb8f1a-337c-11e7-9f30-59fc265ec047.jpg)

<img width="537" alt="negroni-test-03-01" src="https://cloud.githubusercontent.com/assets/21225598/25790385/19a23e9a-3386-11e7-8b79-3653b23c3c53.png">
<img width="538" alt="negroni-test-03-02" src="https://cloud.githubusercontent.com/assets/21225598/25790463/b4e5471c-3386-11e7-8d8a-164894bda09e.png">

The code can easily be modified to deliver any drink for 5 seconds (more or less). It should be noted that the device is not limited to only one drink. The design can be modified to make numerous drinks each selected by a push button. 

##Troubleshooting

##Next Steps
