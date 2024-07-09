# 데이터 기록기 만들기 
- 온습도 센서를 아두이노로 기록해보는 것을 만들어 볼 것이다.


[![YouTube Channel Views](https://img.shields.io/youtube/channel/views/UCz5BOU9J9pB_O0B8-rDjCWQ?label=YouTube&style=social)](https://youtu.be/E6wkvTG2Ofs?si=k_IFc8MM8aGpZE7J)

## 하드웨어 

- 아두이노 우노  
- [AHT20 온습도 센서](https://vctec.co.kr/product/aht20-%EC%98%A8%EC%8A%B5%EB%8F%84-%EC%84%BC%EC%84%9C-i2c-aht20-temperature-humidity-sensor-i2c/19724/)
- M-M 점퍼선 4개 
- USB 2.0 케이블 Type A/B


**주의: 점퍼선 연결시 케이블을 제거하고 진행합니다.**

### 선 작업 
#### 회로도
#### 핀 정보
| [Arduino UNO GPIO](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf) | AHT20 |
|-----------|------|
|   SCL     | SCL  |
|   SDA     | SDA  |
|   5V      | VCC  |
|   GND     | GND  |

## 순서도

## 라이브러리  
- [Adafruit-AHTX0](https://github.com/adafruit/Adafruit_AHTX0)  
:  Adafruit에서 제작한 AHT20 온도 및 습도 센서를 위한 라이브러리 
### Adafruit AHT20 lib의 주요 기능  
1. display.display()
2. display.cleardisplay()

# 코드  

## 응용하기  
### logging하는 장치 만들기 
1. [Putty 다운로드하기](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html) 
2. Putty에서 시리얼 통신을 연결하기 
- ![img](/img/putty.png)
- Sessing logging -> All session output
- Log file name : 원하는 경로에 data.csv 파일로 지정한다.
- Session -> Serial -> Serial line : COM 포트 번호
- Saved Sessions : 저장하기
- ![img2](/img/putty2.png)
3. data.csv파일을 엑셀파일에서 열기 
4. 데이터를 차트로 만들기
![img3](/img/chart.png)








