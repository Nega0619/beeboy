# 1. 프로젝트 개요



## 1-1. Beeboy 로봇이란?

![beeboyrobot](https://picee.pusan.ac.kr/sites/picee/images/temp_1544688531155100.png)



SMART BEEBOY는 ‘저가형 모바일 무선 네트워크 장치’로 재해재난지역에 살포된 후 스스로 위치를 잡아 탐지망을 구축하고, 센서 네트워킹을 통해 조난된 사람의 위치를 구조팀에 알려줌으로써 재해재난 시 많은 인명들을 구조하고자 설계된 로봇입니다.



## 1-2. 프로젝트 과정명

임베디드

- 아두이노 보드 활용 교육 및 BEEBOY 로봇 구동 실습

3D 모델링 S/W 교육

- Fusion 360/CATIA V5 설계 교육 및 BEEBOY 로봇 3D 모델링

3D 프린팅 및 3D 스캐너

- 3D 프린터 사용 방법 교육 및 부품 출력







해당 프로젝트는 2019년에 부산대학교 공학교육혁신센터에서 beeboy 로봇 제작 프로그램에 참여한 결과물입니다.

출처 및 프로젝트 주최 : 

[부산대학교 beeboy 로봇 프로젝트]: https://picee.pusan.ac.kr/picee/42939/subview.do



# 2. 프로젝트 내용

< 요약 >

1. CAD를 이용한 로봇 제작
2. 아두이노를 이용하여 로봇 소프트웨어 작성





## 2-1. CAD를 이용한 로봇 제작

Beeboy 로봇은 3D 프린터로 외곽부분을 출력할 수 있도록 설계도가 주어졌습니다. 해당 Beeboy 로봇 설계도를 보고 Fusion 360을 이용하여 3D 모델링 및 변환을 해주었습니다. 이로써 CAD의 SKETCH, OFFSET, EXTRUDE, FILLET등의 기능을 배웠습니다.



다음은 모델링한 결과입니다.

![image-20220131162049680](https://github.com/Nega0619/2019_beeboy/blob/main/images/image-20220131162049680.png)

![image-20220131162107075](https://github.com/Nega0619/2019_beeboy/blob/main/images/image-20220131162107075.png)

위와 같이 설계한 stl 파일을 gsd 파일로 변환해주고 3D 프린터에서 출력을 해주었습니다. 

3D 프린터에서 중요한 점은 제품이 물리적인 힘을 보통 어느 방향에서 받는지를 고려하는 것이입니다. (3D프린터가 적층형식으로 재료를 녹여서 만들다보니 적층되는 방향과 수직인 방향에 힘을 받으면 쉽게 부서지기 때문입니다.) 그렇기 때문에 적재 위치와 방향을 신경써서 서포터 설정을  해주었습니다. 이 파트에서 흥미로웠던 점은 인공 뼈부터해서 비행기 부품까지 3D 프린터가 점점 더 다양한 곳에 사용되는 것이 흥미로웠습니다.



## 2-2. 아두이노를 이용하여 로봇 소프트웨어 작성

BEEBOY는 아두이노 보드에 의해 동작하기 때문에 아두이노 스케치 프로그램을 이용하여 Beeboy 로봇에 설치될 프로그램을 작성하였습니다. 아두이노는 크게 Setup함수와 loop함수가 있습니다. Setup부분에서는 아두이노 보드에서 사용할 핀들을 초기화해주거나 초기 상태를 설정해주고, loop함수에는 프로그램이 반복적으로 행동할 행동들을 작성해줍니다. 보통 실제 로봇이 동작하는 부분입니다. 



작성해본 기능은 다음과 같습니다. 코드는 embedded 폴더에서 확인하실 수 있습니다.

- LED 전구 깜빡이기

- 색깔별로 LED  전구 켜기

- 5초마다 LED 전구 깜빡이기

- 초음파 센서를 이용하여 장애물 인식 시 부저 울리기

- pwm 모터에 바퀴를 장착하여 로봇 움직이기

- Serial 통신을 이용하여 로봇 속도 제어하기

- 로봇 가로,세로 곡선이동하기

- 블루투스 모듈을 이용하여 로봇제어하기

- 로봇에서 측정한 온도값을 블루투스 연결 기기에 전송하기

  

아두이노로 로봇 소프트웨어 작성을 완료한 후, 안드로이드 스튜디오와 Thunkable을 이용하여 모바일을 어플을 제작하였습니다. 이 어플을 이용하여 Beeboy 로봇과 블루투스 연결을 가능하게 하였습니다. 해당 어플에는 방향키 버튼을 생성하였고, 버튼의 클릭 이벤트로 블루투스 통신을 통해 로봇의 움직임을 제어하였습니다.



코드는 깃허브에서 확인하실 수 있습니다.



# 3. 소감

강의는 기본 동작을 예시로 보여주고, 학생들이 응용하는 방식으로 진행되었습니다. 바로 응용하는 것이 어려웠던 기능도 있었고,  짧은 수업이라 매우 중요한 부분만 배웠기 때문에 처음부터 끝까지 beeboy를 백지상태에서 만들어 보라고 한다면 어려움이 많을 것 같습니다.  짧은 시간에 이 로봇을 완성할 수 있었던 것은 설계도가 다 주어져 있었고 아두이노 보드의 회로판은 이미 완제품을 받았기 때문입니다. 그럼에도 불구하고, 언젠가 로봇을 제작하거나 동작을 구현해야할 때, 이 경험이 큰 도움이 되어줄 것입니다.

이 프로젝트가 끝나고 도전해보고 싶은 과제는 2개입니다. 안드로이드 스튜디오로 작성한 어플은 어플이 꺼지고 나면 블루투스 연결에 오류가 생겨 로봇이 정상 동작을 하지 않습니다. 그렇기 때문에 어플이 꺼져도 블루투스 연결이 정상적으로 동작하도록 백그라운드로 어플이 계속 실행되거나, 박사님께 여쭤봤던 recreate될 때 동작을 추가하는 것을 만들어 보고싶습니다.

또한, 비보이의 아두이노 프로그램이 오직 한 개의 프로세스, 쓰레드로만 동작하는 것 같습니다. 그래서 직진하면서 곡선으로 가는 동작은 안되며 직선으로가기, 곡선으로 돌면서 앞으로 가기, 혹은 제자리 회전 이렇게 버튼에 의한 단 한 개의 동작만 할 수 있습니다. 더불어 빛이 계속 반짝이면서 다른 동작을 하는 것도 불가능합니다. 복합적인 동작을 구현하도록 입력하고 싶어서 간단히 구글링한 결과 아두이노에서도 멀티쓰레딩을 구현하면 가능한 것 같습니다. 그래서 두 개의 버튼에서 입력을 동시에 받아 각각이 동작하는 기능을 구현하고 싶습니다.











































