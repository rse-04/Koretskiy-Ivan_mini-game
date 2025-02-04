void zaryad(){
//Проверить заряд
#define RED 2  // красный светодиод
#define YELLOW 4  // жёлтый светодиод
#define GREEN 6  // зелёный светодиод
#define TESTER A1  // порт для подключения батарейки
int knop_vistrel=2;//кнопка для выстрела
int data;
float voltage;
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
void vknop_istrel(){
  // Проверка нажатия кнопки
  if (digitalRead(knop_vistrel) == 0) {}
    // Пауза для защиты от дребезга
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_vistrel) == 0) {
      // Один раз выводим текст
      vistrel();
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_vistrel) == 0);
    }
  }
}

void vistrel(){}
//Выстрел
void knop_down(){
    // Проверка нажатия кнопки
  if (digitalRead(knop_down) == 0) {}
    // Пауза для защиты от дребезга
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_down) == 0) {
      // Один раз выводим текст
      down();
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_down) == 0);
    }
  }


void knop_up(){// Проверка нажатия кнопки
  if (digitalRead(knop_up) == 0) {}
    // Пауза для защиты от дребезга
    delay(50);
    // Повторный опрос кнопки
    if (digitalRead(knop_up) == 0) {
      // Один раз выводим текст
      up();
      // Ничего не делаем, пока кнопка нажата
      while (digitalRead(knop_up) == 0);
    }
  }

//Движение вверх
void spawn_zombie() {}

void zombie_move() {}

matrix={
  1={0,0,0,0,0,0,0,0}
  2={0,0,0,0,0,0,0,0}
  3={0,0,0,0,0,0,0,0}
  4={0,0,0,0,0,0,0,0}
  5={0,0,0,0,0,0,0,0}
  6={0,0,0,0,0,0,0,0}
  7={0,0,0,0,0,0,0,0}
  8={0,0,0,0,0,0,0,0}
}
void show_matrix()

void replace_pix(a,b){}

void setup() {
  Serial.begin(9600);  // запускаем серийный монитор порта
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(TESTER, INPUT);
  analogWrite(TESTER, LOW);
pinMode(buttonPin, INPUT);

}

void loop() {
  smszaryad()
  vistrel()
  down()
}


}
