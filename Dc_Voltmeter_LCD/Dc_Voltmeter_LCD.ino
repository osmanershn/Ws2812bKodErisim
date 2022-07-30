
float vA = 0.0;
float vB = 0.0;
float vGiris = 0.0;
float vOrtalama = 0.0;
float RA = 99.2; 
float RB = 9.7; 
float RC = 9.8;

void setup() {
  
}
  Serial.begin(9600);
   
void loop() {
  float vToplam = 0.0;

  for(int i=0; i<30; i++)
  {
  float okunanA = analogRead(A0);
  float okunanB = analogRead(A1);
  vA = okunanA * 5  / 1024;
  vB = okunanB * 5  / 1024;
  vA = vA *((RA + RB + RC)/20);
  vB = vB *((RA + RB + RC)/ 10);
  vOrtalama = (vA + vB)/2;
  vToplam = vToplam + vOrtalama;
  
  delay(70);
  }
  float v = vToplam / 30;
  Serial.print("Voltaj (V):");
  Serial.print(v);

  int yuzde = map(v, 22, 25, 0, 100);
  Serial.print("Yuzde(%):");
  Serial.println(yuzde);





  
    }
