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
void prov_knop_vistrel(int knop_vistrel){
  // Проверка нажатия кнопки
  if (digitalRead(knop_vistrel) == 0) {
    // Пауза для защиты от дребезга
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

void down(){

}
//Выстрел
void knop_down(){
    // Проверка нажатия кнопки
  if (digitalRead(knop_down) == 0) {
    // Пауза для защиты от дребезга
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

void up(){

}

void knop_up(){// Проверка нажатия кнопки
  if (digitalRead(knop_up) == 0) {
    // Пауза для защиты от дребезга
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

//Движение вверх
void spawn_zombie() {


}

void zombie_move() {

}

int matrix[64]={
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0
};

void show_matrix(){

}

void replace_pix(int a, int b){

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

}

void loop() {

}