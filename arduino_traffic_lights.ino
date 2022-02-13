// traffic lights
#define s_red 13           //pin red
#define s_yellow 12        //pin yellow
#define s_green 11         //pin green
void setup() 
{
  pinMode(s_red,OUTPUT);     //R
  pinMode(s_yellow,OUTPUT);  //Y
  pinMode(s_green,OUTPUT);   //G
  void f_turn_off_traffic_light();  //all off
}

void loop() 
{
  f_turn_off_traffic_light();   //all off
  digitalWrite(s_red,1);        //red on
  delay(2000);

  f_turn_off_traffic_light();   //all off
  digitalWrite(s_yellow,1);     //yellow on
  delay(1000);

  f_turn_off_traffic_light();   //all off
  digitalWrite(s_green,1);      //green on
  delay(2000);

  f_turn_off_traffic_light();   //all off
  digitalWrite(s_yellow,1);     //yellow on
  delay(1000);
}

void f_turn_off_traffic_light(){
  // function turn off the traffic light
 digitalWrite(s_red,0);
 digitalWrite(s_yellow,0);
 digitalWrite(s_green,0);
  }
