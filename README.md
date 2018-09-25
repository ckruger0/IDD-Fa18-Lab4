# Paper Puppets

*A lab report by Chris Kruger - crk78*

## Part A. Actuating DC motors

<a href="https://youtu.be/oduniCfF61g">Vibration Motor Video</a>

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard<BR>

Yellow wire to signal, red wire to 5v power, and brown wire to ground. 

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**<BR>
 Pin 9

**b. What aspects of the Servo code control angle or speed?**<BR>
Decreasing the number in the `delay()` portion of the code increases speed, while increasing it decreases servo speed. Angle is controlled in the range for the `for()` loop, changing pos range from 0-180 to different values.

## Part C. Integrating input and output<BR>

<a href="https://youtu.be/k8WhCB4AeVo">Circuit in Action Video</a><BR><BR>
<a href="https://github.com/ckruger0/IDD-Fa18-Lab4/blob/master/integrating_input_output.ino">Integrating Input/Output Code</a>

## Part D. Paper puppet

<a href="https://youtu.be/airvcMBmlfs">Paper Puppet Stretch</a>

## Part E. Make it your own

To make it my own, I designed a paper puppet that donned sunglasses when the photoresistor registered enough light hitting the puppet. A video of it in action (with a flashlight, since it's been gloomy lately) can be seen below, along with the code behind it. 

<a href="https://youtu.be/oASNZj3RtpA">Action Video</a><BR><BR>
 <a href="https://github.com/ckruger0/IDD-Fa18-Lab4/blob/master/sunglasses_dude.ino">Sunglasses Code</a>
