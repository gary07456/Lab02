//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by qwer122120043 qwer122120043
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4210696-the-unnamed-circuit

const byte startPin = 2 ;
const byte endPin = 9;
const byte SW = 13;
void setup() 
{
	for (byte i = startPin; i<= endPin; i++) 
	{
		pinMode(i, OUTPUT);
      	
	}
  pinMode(SW,INPUT);
}
/////////////////////////////////////////////
byte i,a;
byte lightPin = startPin;
/////////////////////////////////////////////
void loop()
{
boolean val = digitalRead(13);

if(val)
{
  
lightPin = startPin;
for(a=1;a<=8;a++)
{
// 所有 LED OFF
for (i=startPin; i<= endPin; i++) {
digitalWrite(i,LOW);
}
// 設定要點亮的 LED 位置
// 如果點亮的腳位編號小於結束腳位,

// 否則從頭開始
  digitalWrite(lightPin, HIGH);
if (lightPin < endPin) {
lightPin ++;
} else {
lightPin = startPin;
}
// 點亮 LED

delay (300);
}
////////////////////// 
lightPin=endPin;
  
  for(a=1;a<=8;a++)
{
// 所有 LED OFF
for (i=endPin; i>= startPin; i--) {
digitalWrite(i,LOW);
}
// 設定要點亮的 LED 位置
// 如果點亮的腳位編號小於結束腳位,

// 否則從頭開始
  digitalWrite(lightPin, HIGH);
if (lightPin > startPin) {
lightPin --;
} else {
lightPin = endPin;
}
// 點亮 LED

delay (300);
}  
}//if-------------------------------
else
{
lightPin = startPin;

for (i=startPin; i<=endPin; i++) 
{
	digitalWrite(i,HIGH);
  
}
delay(1000);
for (i=startPin; i<= endPin; i++) 
{
	digitalWrite(i,LOW);
  
}  
delay(1000);  
  for (i=startPin; i<=endPin; i++) 
{
	digitalWrite(i,HIGH);
  
}
delay(1000);
for (i=startPin; i<= endPin; i++) 
{
	digitalWrite(i,LOW);
  
}  
delay(1000);
for(a=1;a<=8;a++)
{
// 所有 LED OFF


for (i=startPin; i<= endPin; i++) 
{
	digitalWrite(i,LOW);
}
// 設定要點亮的 LED 位置
// 如果點亮的腳位編號小於結束腳位,

// 否則從頭開始
  digitalWrite(lightPin, HIGH);
if (lightPin < endPin) {
lightPin ++;
} else {
lightPin = startPin;
}
// 點亮 LED

delay (300);
}
////////////////////// 
for (i=startPin; i<=endPin; i++) 
{
	digitalWrite(i,HIGH);
  
}
delay(1000);
for (i=startPin; i<= endPin; i++) 
{
	digitalWrite(i,LOW);
  
}  
delay(1000);  
  for (i=startPin; i<=endPin; i++) 
{
	digitalWrite(i,HIGH);
  
}
delay(1000);
for (i=startPin; i<= endPin; i++) 
{
	digitalWrite(i,LOW);
  
}  
delay(1000);  
//////////////////////  
lightPin=endPin;
  
  for(a=1;a<=8;a++)
{
// 所有 LED OFF
for (i=endPin; i>= startPin; i--) {
digitalWrite(i,LOW);
}
// 設定要點亮的 LED 位置
// 如果點亮的腳位編號小於結束腳位,

// 否則從頭開始
  digitalWrite(lightPin, HIGH);
if (lightPin > startPin) {
lightPin --;
} else {
lightPin = endPin;
}
// 點亮 LED

delay (300);
}  
  
  
}//else-------------------------------------------------------





}//out---------------------------------
