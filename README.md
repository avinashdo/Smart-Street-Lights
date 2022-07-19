# Smart-Street-Lights
   Smart Street Light Project using Arduino, and IR Sensors , Bread board LED lights widely used electronics components. In this we are going to use these sensors with the Arduino to build an amazing Smart Street light project. With smart street light system we can greatly reduce the energy cost and moreover smart street lights more efficiently manage electricity with lower chances of the automatic street light system overheating and risk of accidents is also minimized. Instead of turning ON the street lights for the entire night, we can design a low cost and efficient smart street light system using the Arduino, IR sensors and some other basic electronics components. we design a smart street light that will be turned on and off whenever there is some vehicle or object appear infront of the IR sensors for some range.

Working video:

https://user-images.githubusercontent.com/80062259/179251038-7250df83-f4dc-4129-a0c9-ede410ccd196.mp4



Type Of Project : IOT


components used 

     1. Arduino uno board
     
     2. IR sensors
     
     3. Bread board
     
     4. LED lights
     
problem:

when street lights are continously in the ON state it wastes a lot of power , so this project helps in reducing the wastage of electricity
by implementing in low people density areas and times with low people density.
     
Working Process:
       
* When the module detects an obstacle in front of the signal, the circuit board green indicator light levels while continuing output low signal OUT port, the module   detects the distance.
    
* The sensor module output port OUT can be directly connected with the microcontroller IO port can also be driven directly to a 5V relay; Connection: VCC-VCC; GND-     GND; OUT-IO
    
* 3-5V DC power supply for the module. When the power is turned on, the red power indicator light up.

* In this project, we are using 4 IR sensors that are connected to the digital pins of the Arduino. We also use 5 LEDs that represent the streetlights, each LED       connected to the pins of the Arduino. Each IR sensor controls 2 LEDs.

* whenever an object comes infront of the Street light it is detected by the IR sensors and it sends the signals to the Arduino board . 

* Then the Arduino board allows power to the street lights and it will glow onlly then.

* Whenever the sensor detects the object the sends the signal to the arduino and it will release the power to the LED lights and it will glow for some amount of time.

* If any of the sensor detects the object then the nearby lights will glow for a few minutes.  
       
       
Team Members:

        1.Pedapati Avinash
        
        2.Satyavarapu Yashwanth
        



