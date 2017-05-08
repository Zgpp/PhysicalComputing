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
