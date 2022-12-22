# Simple Security System with Finite State Machine

In this repo, I build a simple security system with a **Finite State Machine** and implement the system with **C Programming Language**.

Before we move further let's understand what is Finite State Machine or FSM



## Definition

Finite State Machine (FSM) is a mathematical model used to design and analyze systems that exhibit behavior that can be described as a sequence of transitions between a finite number of states.

An FSM consists of a set of states, a set of transitions between those states, and a set of inputs that trigger the transitions. The behavior of the system is determined by the sequence of transitions between states that occur in response to the inputs.



FSMs are often used to design and analyze systems that exhibit complex, state-based behavior, such as automated control systems, communication protocols, and computer programs. They are a useful tool for modeling systems that have a limited number of possible states and transitions, and can be used to design and analyze the behavior of systems in a variety of fields, including computer science, engineering, and security.



## Simple Security System

Now, let's talk about the system I've made.



#### Short Description

In my simple security system, I use **3 states** which are **Disarmed**, **Armed**, and **Triggered**. I also use **2 input devices** which are **Button** and **Motion Sensor**. The *Disarmed* state indicates that the security system is inactive and will not trigger an alarm if the motion sensor detected a movement made by the intruder. Then, the *Armed* state indicates that the security system is active and will trigger an alarm if the motion sensor is activated. And lastly, the *Triggered* state indicates that the security system is in the process of sounding an alarm caused by the movement recorded by the motion sensor.



#### State Transition

In this simple security system, I can move between states with a specific input entered to the system. The initial state is 'Disarmed', then when you press the button it will go to the 'Armed' state and it will wait until the motion sensor is activated. When the motion sensor is activated, it will go to the 'Triggered' state and it will notice the responsible guard. To stop the alarm, the button must be pressed in order to make the system go into 'Disarmed' state. I have prepared a Finite State Machine diagram to give a clear explanation about the transition of the simple security system.

![fsm-diagram](./img/fsm-diagram.png)



From the diagram above I came up with this table

![table](./img/table.png)



And then from the table I can make the Karnaugh map





#### Scenarios

For better understanding, I have prepared some scenarios for operating this system

1. A museum is closed at night and there is only 2 securities guarding the valuable objects inside the museum. When the museum is closed at night, the standard operating procedure required the simple security system to be turned on. So, one security pressed the button to change the state of the machine into 'Armed'. Two hours past and everything goes as usual. Suddenly, a thief came into the museum and the two guards didn't notice it because they were talking. Luckily, the thief passed the motion sensor that has been installed in the museum, then the alarm goes off to notify the guard. One guard enters the museum and the other guard guide his friend by looking at the CCTV. Then the thief get caught and the button is pressed to stop the alarm.
2. A convenience store is closed at night and there is only 1 security guarding the place. As usual, the security pressed the button to make the system goes to 'Armed' state. After that, he need to go to the toilet. Suddenly, a man comes into the security room and tries to turn off the system. But then, he pressed some unknown key in the keyboard and the alarm goes off that notifies the guard. Luckily, the guard catches the man that try to interrupt the system.
3. A jewelry store owner need to close his store in the night. As usual he pressed a button to make the system goes into 'Armed' state then lock the door. He does that everyday. One time, a thief observed his behavior for some day and he thinks that he can go inside the store before the store owner pressed the button. When the system is on 'Disarmed' state, the motion sensor will still detect the motion but will not set off the alarm. The very next day, the thief run into the store ready to take some very valuable items. The thief does not know where the motion detector is placed, and when the store owner presses the button, at the same time the thief passes the motion detector. Then the alarm goes off and the police come to catch the thief.
