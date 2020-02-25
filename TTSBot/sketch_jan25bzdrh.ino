#include <IRremote.h>
#include <IRremoteInt.h>
#include <TTS.h>
TTS text2speech(10);
int RECV_PIN = 11;          
IRrecv receiver(RECV_PIN);  
decode_results results;     
#include <Servo.h>
 
Servo servoLeft;
Servo servoRight;
void setup() {
  text2speech.setPitch(6);
  text2speech.sayText("Computer Booted");
  Serial.begin(115200);
  receiver.enableIRIn();  
  servoLeft.attach(13);
  servoRight.attach(12); 
}

void up() {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  }

void upright() {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1400);
  }

void right() {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1500);
  }

void downright() {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1600);
  }

void down() {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  }

void downleft() {
  servoLeft.writeMicroseconds(1400);
  servoRight.writeMicroseconds(1700);
  }

void left() {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  }

void upleft() {
  servoLeft.writeMicroseconds(1600);
  servoRight.writeMicroseconds(1300);
  }

void loop() {
  if(receiver.decode(&results)) {
    Serial.println("---------------");
    if(results.value != 3684350412){if(results.value != 2628541889){if(results.value != 1070364233){if(results.value != 182361013){if(results.value != 4097302896){if(results.value != 675679221){Serial.println(results.value);}}}}}}
    if(results.value == 708331696){up();}
    if(results.value == 2286524762){up();}
    if(results.value == 4026367539){up();}
    if(results.value == 1309593309){up();}
    
    if(results.value == 3665916560){upright();}
    if(results.value == 3069965262){upright();}
    if(results.value == 1159951605){upright();}
    if(results.value == 1543738006){upright();}
    if(results.value == 857973400){upright();}
    if(results.value == 2706759820){upright();}
    if(results.value == 694113073){upright();}
    if(results.value == 200794865){upright();}
    if(results.value == 2646975741){upright();}
    
    if(results.value == 462634167){right();}
    if(results.value == 592244058){right();}
    if(results.value == 716593542){right();}
    if(results.value == 1301331463){right();}
    if(results.value == 3643436091){right();}
    
    if(results.value == 2206084131){downright();}
    if(results.value == 4106808170){downright();}
    if(results.value == 1087113681){downright();}
    if(results.value == 948479736){downright();}
    if(results.value == 3411549897){downright();}
    if(results.value == 3411549897){downright();}
    
    if(results.value == 1580431889){down();}
    if(results.value == 2779597744){down();}
    if(results.value == 3533294557){down();}
    if(results.value == 2697964434){down();}
    if(results.value == 3614927867){down();}
    if(results.value == 1662065199){down();}
    
    if(results.value == 1850963022){downleft();}
    if(results.value == 531109439){downleft();}
    if(results.value == 3335601986){downleft();}
    if(results.value == 1486815566){downleft();}
    if(results.value == 620761979){downleft();}
    if(results.value == 1397163026){downleft();}
    if(results.value == 774910194){downleft();}
    if(results.value == 3117014822){downleft();}
    if(results.value == 1243014811){downleft();}
    if(results.value == 2623696614){downleft();}
    if(results.value == 1468949554){downleft();}
    if(results.value == 2891080079){downleft();}
    
    if(results.value == 3435286701){left();}
    if(results.value == 3429494164){left();}
    if(results.value == 2959632754){left();}
    if(results.value == 1943440265){left();}
    if(results.value == 1435862107){left();}
    if(results.value == 3516123156){left();}
    if(results.value == 582062898){left();}
    if(results.value == 3143123344){left();}
    if(results.value == 723588081){left();}
    if(results.value == 3636441552){left();}
    if(results.value == 2924167526){left();}
    
    if(results.value == 92893411){upleft();}
    if(results.value == 1925031594){upleft();}
    if(results.value == 3773818014){upleft();}
    if(results.value == 4267136222){upleft();}
    if(results.value == 543615686){upleft();}
    if(results.value == 2885720314){upleft();}
    if(results.value == 1474309319){upleft();}
    receiver.resume();                        
  }
}
