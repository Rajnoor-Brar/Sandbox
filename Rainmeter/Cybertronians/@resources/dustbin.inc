[MeasureBits]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=OS_BITS
UpdateDivider=-1

[MeasureLAN]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=IP_ADDRESS
UpdateDivider=600

[MeasureWAN]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=http://checkip.dyndns.org
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
UpdateDivider=600

[MeasureOS]
Measure=Plugin
Plugin=Plugins\SysInfo.dll
SysInfoType=OS_VERSION
UpdateDivider=-1


[CPUBar]
Meter=Bar
MeasureName=ProcessLoad0
BarImage=#@#Images\files\bar02.png
ImageTint=#color1#
BarOrientation=Vertical
x=669
y=45
w=20
h=90
Flip=1

[WinVersion]
Meter=String
MeasureName=MeasureOS
MeasureName2=MeasureBits
MeterStyle=TextStyle1
StringAlign=Right
FontSize=15
x=635
y=32
Text=%1
AntiAlias=1

[MeterLanIP]
Meter=String
MeasureName=MeasureLAN
MeterStyle=TextStyle1
StringAlign=Right
FontSize=12
x=r
y=-5R
Text=%1 -LAN
AntiAlias=1

[MeterWanIP]
Meter=String
MeasureName=MeasureWAN
MeterStyle=TextStyle1
StringAlign=Right
FontSize=12
x=r
y=-5R
Text=%1 -WAN
AntiAlias=1

[MeterBits]
Meter=String
MeasureName=MeasureBits
MeterStyle=TextStyle1
StringAlign=Right
FontSize=12
x=r
y=-5R
Text=%1 bit OS
AntiAlias=1
;============================
;========processes

[ProcessBox]
Meter=Image
ImageName=#@#Images\case1.png
ImageTint=#color2#,200
w=180
h=225
x=130
y=225
;--
[ProcessName0]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=0

[ProcessLoad0]
Measure=calc
Formula=ProcessName0

[NameProcess0]
Meter=String
MeasureName=ProcessName0
MeterStyle=NoteText
FontSize=11
x=20r
y=20r
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess0]
Meter=String
MeasureName=ProcessLoad0
MeterStyle=NoteText
StringAlign=right
FontSize=11
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--
[ProcessName1]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=1

[ProcessLoad1]
Measure=calc
Formula=ProcessName1

[NameProcess1]
Meter=String
MeasureName=ProcessName1
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess1]
Meter=String
MeasureName=ProcessLoad1
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--

[ProcessName2]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=2

[ProcessLoad2]
Measure=calc
Formula=ProcessName2

[NameProcess2]
Meter=String
MeasureName=ProcessName2
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess2]
Meter=String
MeasureName=ProcessLoad2
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;---
[ProcessName3]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=3

[ProcessLoad3]
Measure=calc
Formula=ProcessName3

[NameProcess3]
Meter=String
MeasureName=ProcessName3
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess3]
Meter=String
MeasureName=ProcessLoad3
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;---
[ProcessName4]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=4

[ProcessLoad4]
Measure=calc
Formula=ProcessName4

[NameProcess4]
Meter=String
MeasureName=ProcessName4
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess4]
Meter=String
MeasureName=ProcessLoad4
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--
[ProcessName5]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=5

[ProcessLoad5]
Measure=calc
Formula=ProcessName5

[NameProcess5]
Meter=String
MeasureName=ProcessName5
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess5]
Meter=String
MeasureName=ProcessLoad5
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--
[ProcessName6]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=6

[ProcessLoad6]
Measure=calc
Formula=ProcessName6

[NameProcess6]
Meter=String
MeasureName=ProcessName6
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess6]
Meter=String
MeasureName=ProcessLoad6
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--
[ProcessName7]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=7

[ProcessLoad7]
Measure=calc
Formula=ProcessName7

[NameProcess7]
Meter=String
MeasureName=ProcessName7
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess7]
Meter=String
MeasureName=ProcessLoad7
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;--
[ProcessName8]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=8

[ProcessLoad8]
Measure=calc
Formula=ProcessName8

[NameProcess8]
Meter=String
MeasureName=ProcessName8
MeterStyle=NoteText
FontSize=10
x=-135r
y=R
w=100
h=20
Text=%1
Clipstring=1

[LoadProcess8]
Meter=String
MeasureName=ProcessLoad8
MeterStyle=NoteText
StringAlign=right
FontSize=10
x=135r
y=r
w=40
h=20
Text=%1%
Clipstring=1
;-----


[MeasureHDD1]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive1#

[MeasureTotalHDD1]
Measure=FreeDiskSpace
Total=1
Drive=#Drive1#

[Letter]
Meter=image
ImageName=#@#Images\drive.png
x=585
y=480

[Letter0]
Meter=Image
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive1#"][!RainmeterRedraw]
MouseOverAction=[!ShowMeterGroup HD1]
MouseLeaveAction=[!HideMeterGroup HD1]
x=585
y=480
w=55
h=55

[HddDIn]
Meter=Image
ImageName=#@#Images\1366x768\main04.png
x=607
y=522
Group=HD


[HddDOn]
Meter=IMAGE
ImageName=#@#Images\1366x768\dim\0.png
ImageTint=#Color3#,255
X=606
Y=500



[TextREST]
Meter=STRING
FontFace=Cybertron Condensed
FontColor=#Color1#,255
StringStyle=Normal
Fontsize=11
StringAlign=Left
AntiAlias=1

[Name]
Meter=STRING
Text=#Drive1Name#
MeterStyle=TextREST
X=650
Y=517
Group=HD


[UsageD]
MeasureName=MeasureHDD1
Meter=STRING
MeterStyle=TextREST
StringAlign=Right
X=700
Y=537
AutoScale=1
Text=%1B
Group=HD


[TotalD]
MeasureName=MeasureTotalHDD1
Meter=STRING
MeterStyle=TextREST
X=710
Y=537
AutoScale=1
Text=%1B
Group=HD

;-----
[MeasureHDD2]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive2#

[MeasureTotalHDD2]
Measure=FreeDiskSpace
Total=1
Drive=#Drive2#

[Letter2]
Meter=image
ImageName=#@#Images\Drive.png
x=585
y=545



[Letter02]
Meter=Image
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive2#"][!RainmeterRedraw]
MouseOverAction=[!ShowMeterGroup HE]
MouseLeaveAction=[!HideMeterGroup HE]
x=585
y=545
w=55
h=55



[HddEIn]
Meter=Image
ImageName=#@#Images\1366x768\main04.png
x=607
y=587
Group=HE


[HddEOn]
Meter=IMAGE
ImageName=#@#Images\1366x768\dim\0.png
ImageTint=#Color3#,255
X=606
Y=565



[Name2]
Meter=STRING
Text=#Drive2Name#
MeterStyle=TextREST
X=650
Y=583
Group=HE


[UsageE]
MeasureName=MeasureHDD2
Meter=STRING
MeterStyle=TextREST
StringAlign=Right
X=700
Y=602
AutoScale=1
Text=%1B
Group=HE


[TotalE]
MeasureName=MeasureTotalHDD2
Meter=STRING
MeterStyle=TextREST
X=710
Y=602
AutoScale=1
Text=%1B
Group=HE

;----
[MeasureHDD3]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive3#

[MeasureTotalHDD3]
Measure=FreeDiskSpace
Total=1
Drive=#Drive3#
IfAboveValue=0

[Letter3]
Meter=image
ImageName=#@#Images\Drive.png
x=585
y=610



[Letter03]
Meter=Image
SolidColor=0,0,0,1
LeftMouseDownAction=!Execute ["#Drive3#"][!RainmeterRedraw]
MouseOverAction=[!ShowMeterGroup HF]
MouseLeaveAction=[!HideMeterGroup HF]
x=585
y=610
w=55
h=55



[HddFIn]
Meter=Image
ImageName=#@#Images\1366x768\main04.png
x=607
y=652
Group=HF


[HddFOn]
Meter=IMAGE
ImageName=#@#Images\1366x768\dim\0.png
ImageTint=#Color3#,255
X=606
Y=630



[Name3]
Meter=STRING
Text=#Drive3Name#
MeterStyle=TextREST
StringAlign=Left
X=650
Y=648
Group=HF


[UsageF]
MeasureName=MeasureHDD3
Meter=STRING
MeterStyle=TextREST
StringAlign=Right
X=700
Y=665
AutoScale=1
Text=%1B
Group=HF


[TotalF]
MeasureName=MeasureTotalHDD3
Meter=STRING
MeterStyle=TextREST
X=710
Y=665
AutoScale=1
Text=%1B
Group=HF


;--
[DriveToggle]
meter=Button
ImageTint=#Color1#
Buttonimage=#@#\Images\button.png
x=555
y=633
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!ShowMeterGroup drives][!Writekeyvalue variables D1 none][!Writekeyvalue variables D2 main][!HideMeter DriveToggle][!ShowMeter DriveToggle2][!Writekeyvalue variables drivegroup "drives | Main"]
TooltipTitle=Toggle Drive Stats
TooltipText=Click to Show Drive Stats

Group=#D1#

[DriveToggle2]
meter=Button
ImageTint=#color1#
Buttonimage=#@#\Images\button.png
x=555
y=633
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!HideMeterGroup drives][!Writekeyvalue variables D1 main][!Writekeyvalue variables D2 none][!HideMeter DriveToggle2][!ShowMeter DriveToggle][!Writekeyvalue variables drivegroup drives]
TooltipTitle=Toggle Drive Stats
TooltipText=Click to Hide Drive Stats

Group=#D2#



;=================
[MusicVolBg]
Meter=Image
ImageName=#@#Images\barbg01.png
ImageTint=#color1#
X=528
Y=515
Group=#musicvol#
Hidden=1

[MusicVol]
Meter=Bar
MeasureName=MusicVolume
BarImage=#@#Images\bar01.png
ImageTint=#color2#
BarOrientation=Horizontal
X=10r
Y=5r
Group=#musicvol#
Hidden=1

[MusicVol0]
Meter=Image
Solidcolor=0,0,0,1
X=-8r
y=r
W=8
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 0"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 0%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol5]
Meter=Image
Solidcolor=0,0,0,1
X=8r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 5"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 5%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol10]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 10"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 10%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol15]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 15"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 15%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol20]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 20"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 20%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol25]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 25"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 25%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol30]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 30"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 30%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol35]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 35"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 35%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol40]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 40"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 40%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol45]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 45"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 45%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol50]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 50"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 50%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol55]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 55"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 55%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol60]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 60"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 60%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol65]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 65"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 65%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol70]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 70"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 70%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol75]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 75"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 75%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol80]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 80"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 80%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol85]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 85"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 85%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol90]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 90"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 90%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol95]
Meter=Image
Solidcolor=0,0,0,1
X=13r
y=r
W=12
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 95"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 95%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1

[MusicVol100]
Meter=Image
Solidcolor=0,0,0,1
X=12r
y=r
W=13
H=23
LeftMouseUpAction=[!CommandMeasure MusicVolume "SetVolume 100"]
MouseOverAction=[!SetOption SysTTip Text "SetVolume : 100%"][!ShowMeter SysTTip]
MouseLeaveAction=[!HideMeter SysTTip]
Group=#musicvol#
Hidden=1
;-----
[MusicVolToggle]
meter=Button
ImageTint=#Color1#
Buttonimage=#@#\Images\button.png
x=-255r
y=-20r
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!ShowMeterGroup musicvol][!Writekeyvalue variables P1 none][!Writekeyvalue variables P2 "PL1"][!Setvariable P1 none][!Setvariable P2 "PL1"][!HideMeter MusicVolToggle][!ShowMeter MusicVolToggle2][!Writekeyvalue variables musicvol "musicvol | PL1"]
DynamicVariables=1
Hidden=1
Group=#P1#

[MusicVolToggle2]
meter=Button
ImageTint=#color1#
Buttonimage=#@#\Images\button.png
x=r
y=r
MouseOverAction=[PLAY #@#01.WAV]
LeftMouseUpAction=[!HideMeterGroup musicvol][!Writekeyvalue variables P1 "PL1"][!Writekeyvalue variables P2 "none"][!Setvariable P1 "PL1"][!Setvariable P2 "none"][!HideMeter MusicVolToggle2][!ShowMeter MusicVolToggle][!Writekeyvalue variables musicvol "musicvol"]
DynamicVariables=1

;==============

[LaunchIcoBg1]
Meter=Image
SolidColor=0,0,0,140
X=429
Y=89
W=32
H=32 

[LaunchIco1]
Meter=Image
ImageName=#LaunchIco4#
X=2r
Y=2r
W=28
H=28
MouseOverAction=[!SetOption LaunchIcoBg1 SolidColor "#color3#,180"]
MouseLeaveAction=[!SetOption LaunchIcoBg1 SolidColor "0,0,0,140"]

[LaunchIcoBg2]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco2]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 

[LaunchIcoBg3]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco3]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 

[LaunchIcoBg4]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco4]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 

[LaunchIcoBg5]
Meter=Image
SolidColor=0,0,0,140
X=115R
Y=-2r
W=32
H=32 

[LaunchIco5]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28

[LaunchIcoBg6]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco6]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 

[LaunchIcoBg7]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco7]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 

[LaunchIcoBg8]
Meter=Image
SolidColor=0,0,0,140
X=25R
Y=-2r
W=32
H=32 

[LaunchIco8]
Meter=Image
ImageName=#LaunchIco1#
X=2r
Y=2r
W=28
H=28 
Hidden=1
Group=#P2#