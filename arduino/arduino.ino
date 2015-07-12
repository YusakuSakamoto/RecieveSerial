unsigned char moji;


void setup()
{
  Serial.begin(115200);
}

void loop()
{
  moji = Serial.read();
  
  if(moji != 255){
    Serial.print(moji);
  }
}
