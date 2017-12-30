int timer = 1000;    
int U18 = 2;
int State = 0;    
int state;
int flag=0;       
int lastState = 0;     


boolean space[]={0,0,0,0,0};  
boolean A[]={1,1,1,1,1,0,0,1,0,1,0,0,1,0,1,1,1,1,1,1};
boolean B[]={1,1,1,1,1,1,0,1,0,1,1,1,1,1,1}; 
boolean C[]={1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
boolean D[]={1,1,1,1,1,1,0,0,0,1,1,1,1,1,1};
boolean E[]={1,1,1,1,1,1,0,1,0,1,1,0,1,0,1};
boolean F[]={1,1,1,1,1,0,0,1,0,1,0,0,1,0,1};
boolean G[]={1,1,1,1,1,1,0,0,0,1,1,0,1,0,1,1,1,1,0,1};
boolean H[]={1,1,1,1,1,0,0,1,0,0,1,1,1,1,1};
boolean I[]={1,0,0,0,1,1,1,1,1,1,1,0,0,0,1};
boolean R[]={1,1,1,1,1,0,1,1,0,1,1,0,1,1,1};
boolean T[]={0,0,0,0,1,1,1,1,1,1,0,0,0,0,1};
boolean S[]={1,0,1,1,1,1,0,1,0,1,1,1,1,0,1};
boolean O[]={1,1,1,1,1,1,0,0,0,1,1,1,1,1,1};
boolean L[]={1,1,1,1,1,1,0,0,0,0,1,0,0,0,0};
boolean K[]={1,1,1,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1};
boolean P[]={1,1,1,1,1,0,0,1,0,1,0,0,1,1,1};
boolean N[]={1,1,1,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,1};
boolean hyphen[]={0,0,1,0,0,0,0,1,0,0};

boolean exclamationmark[]={1,0,1,1,1,1,0,1,1,1};

int m;

void setup() {
  for (int Pin = 8; Pin <=12; Pin++) {
    pinMode(Pin, OUTPUT);}
  pinMode(U18, INPUT);
      Serial.begin(9600);

}

void loop() {


if(Serial.available() > 0){     
      state = Serial.read();   
      flag=0;
    }   
    if (state == 'a') {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
WriteLetter4Width(A);
WriteLetter1Width(space);
WriteLetter4Width(A);
WriteLetter1Width(space);
WriteLetter4Width(K);
WriteLetter1Width(space);
WriteLetter4Width(A);
WriteLetter1Width(space);
WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter3Width(H);
WriteLetter1Width(space);
WriteLetter1Width(space);
WriteLetter2Width(exclamationmark);
WriteLetter1Width(space);}}
lastState = State;
        if(flag == 0){
          Serial.println("name: aakash");
          flag=1;
        }
    }
   //IITTp 
   else if (state == 'i') {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
WriteLetter3Width(I);
WriteLetter1Width(space);
WriteLetter3Width(I);
WriteLetter1Width(space);
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter2Width(hyphen);
WriteLetter1Width(space);
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter3Width(P);
WriteLetter1Width(space);
WriteLetter1Width(space);}}
lastState = State;
        if(flag == 0){
          Serial.println("name: IIT-TP");
          flag=1;
        }
    }

    //hello
       else if (state == 'h') {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
WriteLetter3Width(H);
WriteLetter1Width(space);
WriteLetter3Width(E);
WriteLetter1Width(space);
WriteLetter3Width(L);
WriteLetter1Width(space);
WriteLetter3Width(L);
WriteLetter1Width(space);
WriteLetter3Width(O);
WriteLetter1Width(space);

WriteLetter2Width(exclamationmark);
WriteLetter1Width(space);
}}
lastState = State;
        if(flag == 0){
          Serial.println("Hello !");
          flag=1;
        }
    }

//thanks    
  else if (state == 't') {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
// tick tock
WriteLetter3Width(T);
WriteLetter1Width(space);
WriteLetter3Width(H);
WriteLetter1Width(space);
WriteLetter4Width(A);
WriteLetter1Width(space);
WriteLetter5Width(N);
WriteLetter1Width(space);
WriteLetter4Width(K);
WriteLetter1Width(space);
WriteLetter3Width(S);
WriteLetter1Width(space);
}}
lastState = State;
        if(flag == 0){
          Serial.println("name: Tsn");
          flag=1;
        }
    }
    //tsn sir
  else if (state == 'y') {
State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){
WriteLetter3Width(T);
WriteLetter1Width(space); 
WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter5Width(N);
WriteLetter1Width(space);
WriteLetter1Width(space);
WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter3Width(I);
WriteLetter1Width(space);
WriteLetter3Width(R);
WriteLetter1Width(space);
}}
lastState = State;
        if(flag == 0){
          Serial.println("name: Tsn");
          flag=1;
        }
    }
    
    else if (state == 'w') {
        State = digitalRead(U18);
if (State != lastState){
  if (State == HIGH){

WriteLetter3Width(S);
WriteLetter1Width(space);
WriteLetter4Width(K);
WriteLetter1Width(space);
WriteLetter3Width(H);
WriteLetter1Width(space);
WriteLetter2Width(exclamationmark);
WriteLetter1Width(space);}}
lastState = State;
        if(flag == 0){
          Serial.println("name: sky");
          flag=1;
        }
    }
}

void WriteLetter5Width(boolean letter[]){
  m=0;
  for (int n=0; n<=4; n++){
  for (int Pin = 8; Pin <=12; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}
    
void WriteLetter4Width(boolean letter[]){
  m=0;
  for (int n=0; n<=3; n++){
  for (int Pin = 8; Pin <=12; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}

void WriteLetter3Width(boolean letter[]){
  m=0;
  for (int n=0; n<=2; n++){
  for (int Pin = 8; Pin <=12; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}

 void WriteLetter2Width(boolean letter[]){
  m=0;
  for (int n=0; n<=1; n++){
  for (int Pin = 8; Pin <=12; Pin++) {
    digitalWrite(Pin, letter[m]);
    m=m+1;}
    delayMicroseconds(timer);}}
 
 void WriteLetter1Width(boolean letter[]){
  m=0;
  for (int Pin = 8; Pin <=12; Pin++) {
    digitalWrite(Pin, space[m]);
    m=m+1;}
    delayMicroseconds(timer);}

  
