# Portable-Obstacle-Detector-w-Arduino
The Portable Obstacle Detector using arduino is a portable ,compact and
helpful device for the visually impaired people. It consists of an arduino chip, an
ultrasonic sensor and a vibrating module connected to each other with the help
of a wire. It is then attached to a wrist band or any such accessories to give the
portable characteristics.
The device is quite public friendly due to its non-disturbing
characteristics and is very useful when the visually impaired person is to walk in
a fully filled crowd. The walking stick might cause chaos as the stick , being
long might hit the person standing upfront or might hit the obstacle which is in
front of the person causing inconvenience to the members of the crowd.

The P.O.D. avoids such disturbances. The arduino chip is used as the
back-bone of the device.A program is coded and is stored in the arduino in such
a way that the it triggers a vibration when once an object appears withing 100
cms infront of the person. This will cause the vibrating module to vibrate and
hence alert the person that he has to change his course of travelling or to change
the direction.

The ultrasonic sensor is responsible for the triggering that happens within
the arduino. The sensor is inbuilt with a transmitter and a receiver .The
transmitter transmits the Ultrasonic wave and when it hits an object it is
rebounded. The rebound wave is captured by the receiver which triggers the
arduino which inturn causes the vibrating module to act upon.The distance is
calculated using the formula speed of sound in meters per second divided by 2
multiplied by the time taken for the Ultrasonic sound to be generated and
received ( 0.32/2 x T) .
