int RLED = 6, GLED = 11, BLED = 9;
int arr[3] = {RLED, GLED, BLED};

void setup(){
  pinMode(RLED,OUTPUT);
  pinMode(GLED,OUTPUT);
  pinMode(BLED,OUTPUT);
}

void on(int LED){
  analogWrite(LED, 20);
}
void off(int LED){
  analogWrite(LED, 0);
}

void loop(){
  for(int i = 0; i<3 ; i++){
    on(arr[i]);
    delay(1000);
    off(arr[i]);
  }
  // 亮一個
  for(int i = 0; i<3 ; i++){
    for(int j = 0; j<3 ; j++){
      on(arr[j]);
    }
    off(arr[i]);
    delay(2000);
  }
  for(int j = 0; j<3 ; j++){
    off(arr[j]);
  }
  // 亮兩個
  
  for(int i = 0; i<3 ;i++){
    on(arr[i]);
  }
  delay(3000);
  // 全亮

  for(int i = 0; i<3 ;i++){
    off(arr[i]);
  }
  delay(4000);
  // 全暗
}