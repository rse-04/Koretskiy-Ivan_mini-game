int data;
int voltage;

void zaryad(){
//Проверить заряд
#define RED 2  // красный светодиод
#define YELLOW 4  // жёлтый светодиод
#define GREEN 6  // зелёный светодиод
#define TESTER A1  // порт для подключения батарейки

int knop_vistrel=2;//кнопка для выстрела
int knop_down=3;//кнопка для выстрела
int knop_up=4;//кнопка для выстрела

int data;
float voltage;
}


void debug(int a){
   Serial.println(a);
   }

void smszaryad(){
  data = analogRead(A1);  // считываем данные с порта A1
  voltage = data * 0.0048;  // переводим значения в вольты
  Serial.print(voltage);  // выводим напряжение на монитор
  Serial.println(" Volts");
  if ( voltage >= 1.5 ) {
    digitalWrite(GREEN, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, LOW);
  } else if ( voltage < 1.5 && voltage > 1.3 ) {
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(RED, LOW);
  } else if ( voltage <= 1.3 ) {
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED, HIGH);
  }
}

//Сообщить о низком заряде
void ishod_igr(){}
//Определение исхода
void vistrel(){

}

int kVis=0;
int kUp=0;
int kDown=0;

void reset(){
   kVis=0;
   kUp=0;
   kDown=0;
}

void prov_knop_vistrel(int knop_vistrel){
  // Проверка нажатия кнопки
  if (digitalRead(knop_vistrel) == 0) {
    // Пауза для защиты от дребезга
    kVis=1;    
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_vistrel) == 0) {
      // Один раз выводим текст
      vistrel();
      debug(digitalRead(knop_vistrel));
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_vistrel) == 0);
    }
    
  }

//Выстрел
void knop_down(){
    // Проверка нажатия кнопки
  if (digitalRead(knop_down) == 0) {
    // Пауза для защиты от дребезга
     kUp=1;   
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_down) == 0) {
      // Один раз выводим текст
      down();
       debug(digitalRead(knop_down));
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_down) == 0);
    }
  }

  void down(){

}


void knop_up(){// Проверка нажатия кнопки
  if (digitalRead(knop_up) == 0) {
    // Пауза для защиты от дребезга
    kDown=1;
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_up) == 0) {
      // Один раз выводим текст
      up();
      debug(digitalRead(knop_up));
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_up) == 0);
    }
  }

void up(){

}

//Движение вверх
void spawn_zombie() {


}

void zombie_move() {

}

int matrix[64]={
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0
};


//список персонажей 
//1-человек(№1)
//2-зомби(№2)
//3-пуля(№3)

void show_matrix(){
  for (a=1;a<#matrix; a++){
    if (matrix[a]==0){
      //гасить пиксель матрицы
    }
    if (matrix[a]==0){
      //гасить пиксель матрицы
    }
  }
}

void replace_pix(int a, int b){
  matrix[a]=b;
  return True
}

void setup() {
  Serial.begin(9600);  // запускаем серийный монитор порта
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(TESTER, INPUT);
  analogWrite(TESTER, LOW);
  pinMode(knop_vistrel, INPUT_PULLUP);
  pinMode(knop_up, INPUT_PULLUP);
  pinMode(knop_down, INPUT_PULLUP);

int s=0

  
}


int nPer=25
void loop() {
  //тригеры

//Запуск игры.  
if (kVis==1 or kUp==1 or kDown==1){
  s==1;
}


//реакции

//------
  // 01 02 03 04 05 06 07 08 
  // 09 10 11 12 13 14 15 16 
  // 17 18 19 20 21 22 23 24 
  // 25 26 27 28 29 30 31 32 
  // 33 34 35 36 37 38 39 40 
  // 41 42 43 44 45 46 47 48 
  // 49 50 51 52 53 54 55 56 
  // 57 58 59 60 61 62 63 64
//


//список персонажей 
//1-человек(№1)
//2-зомби(№2)
//3-пуля(№3)

  
// 0.Ждет  
  if s==0(){
    prov_knop_vistrel();
    prov_knop_up();
    prov_knop_down();  
    if(kVis==1 || kUp==1 || kDown==1){
      s=2;
      reset();      
    }      
  }
// 1.Идет процесс игры

if s==1(){
  show_matrix();
  prov_knop_vistrel();
  prov_knop_up();
  prov_knop_down();  
  if (kVis==1){
    matrix[nPer+1]=3
    //нужен таймаут    
  }
  if (kDown==1){
    matrix[nPer]=0
    matrix[nPer+8]=1
    //нужен таймаут
    
    if (kUp==1){
    matrix[nPer]=0
    matrix[nPer-8]=1
    //нужен таймаут    
  }
  

}

//проверять кнопки 

}
// 2.Победа   /victory
if s==2(){
  
}
// 3.Поражение
if s==3(){
  
}
// 4.Конец заряда
if s==4(){
