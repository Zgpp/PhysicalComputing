#Midterm: The Magic Box

Magic box is an exploration between movement and sensory awareness. The purpose of the box is to respond to its environment and the people around it. Through a motion sensor, the box monitors its surroundings, reacting to ambient activity, and a user’s proximity.

The user will first begin by asking a question. When the user moves his/her hand over the sensors, the colors of the lights change to either blue or white. White indicating the answer is no and blue indicating the answer is yes.

The goal is to create an experience that is dynamic and engaging, one in which the user can make connections between his/her movements and the box’s response.

##Equipment:

* Arduino Uno
* Parallax PIR Motion Sensor
* Mini Breadboard
* USB A to B Cable
* 2 5mm LEDS (Blue and White)
* 2 220 ohm resistors
* 9 Solderless Breadboard Jumper Wires

##The Process

I began by first working on the box. It helped me to define the scale and jump-start material experimentation. I sanded the box to give the ilusion of a magic 8 ball so the user won't focus on the lights. 

![plasticbox-02](https://cloud.githubusercontent.com/assets/21225598/24440314/78b41e64-1421-11e7-9bd9-61b94a963d86.jpg)

Afterwards, I tested the photoresistor with the LEDs. I noticed the only way the LEDs turn on is by touching the photoresistor. This wasn't going to work since I did not want the user to touch the sensor. I researched another solution and found the Parallax Motion Sensor. Once I connected all the wires, I wanted to test the LEDs in correlation with the motion sensor.

![motion-sensor-test](https://cloud.githubusercontent.com/assets/21225598/24440587/f908eb84-1422-11e7-8217-8d75e790672b.jpg)
<img width="465" alt="motion-sensor-test" src="https://cloud.githubusercontent.com/assets/21225598/24439201/c3011384-141a-11e7-9ff0-dace01dc1a1f.png">

[Video: Testing the Motion Sensor](https://vimeo.com/210543674)

##Making the Magic

The ultimate test was getting the LEDS to randomly blink and have one LED be the answer without using delays. I thought about the show, 'The Price is Right' and the spinning of the wheel, that moment where the participant waits for the wheel to stop for an answer. I wanted to give the user that moment of anticipation for the answer. It was intimidating because I didn't want to break anything but at the same time, it was also exciting to see it all come together. It took me about 2 days to assemble the code, and work out the kinks. Until, I finally came to sequence that worked.

![magic-box](https://cloud.githubusercontent.com/assets/21225598/24440197/c7e7491c-1420-11e7-97b8-9c5dfba0202c.jpg)
<img width="550" alt="magic-box-code-01" src="https://cloud.githubusercontent.com/assets/21225598/24440845/9a471920-1424-11e7-8813-615ed56c558c.png">
<img width="546" alt="magic-box-code-02" src="https://cloud.githubusercontent.com/assets/21225598/24440780/2f2de894-1424-11e7-8ac6-ffdc98dc04a6.png">

[Video: Yes Example](https://vimeo.com/210549794)

[Video: No Example](https://vimeo.com/210554066)

##Troubleshooting

During the process I worked with another box, it was bigger and thick in weight, which I also sanded. I was having issues with the motion sensor being detected. At first, I thought it was because it wasn't a clear but after testing both boxes I noticed that I should of made holes for both for the sensor to detect more easily.

![box-problems](https://cloud.githubusercontent.com/assets/21225598/24470428/e497b9fe-148c-11e7-91be-ffe178a68556.jpg)

##Next Steps

I would like to incorporate sound to this project. More specifically, I would like the box to respond back to the user. Whether it's telling the user "ask a question", or responding "no" or "yes". Instead of having the user read instructions, the magic box could come across like a fortune teller. I think this could enhance the experience more. 
