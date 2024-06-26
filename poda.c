int const trigPin = 10;
int const echoPin = 9;
int const buzzPin = 2;
int distance;
void setup()
{
pinMode(trigPin, OUTPUT); // trig pin will have pulses output
pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
Serial.begin(9600);
}
void loop()
{
// Duration will be the input pulse width and distance will be the distance to the
obstacle in centimeters
int duration;
// Output pulse with 1ms width on trigPin
digitalWrite(trigPin, HIGH);
delay(50);
digitalWrite(trigPin, LOW);
// Measure the pulse input in echo pin
duration = pulseIn(echoPin, HIGH);
// Distance is half the duration devided by 29.1 (from datasheet)
distance = (duration/2) / 29.1;
Serial.print(&quot;Distance: &quot;);
Serial.println(distance);
// if distance less than 1 meter and more than 0 (0 or less means over range)
if (distance &lt;= 100 &amp;&amp; distance &gt;= 0) {
// Buzz
digitalWrite(buzzPin, HIGH);
} else {
// Don&#39;t buzz
digitalWrite(buzzPin, LOW);
};
delay(60);
}
