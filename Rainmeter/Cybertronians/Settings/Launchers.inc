[Variables]
GeneralBg=0,0,0,100
Generalhover=0,0,0,250
;---
AutoBg=0,0,0,100
AutoHover=0,0,0,250
;---
DeceptiBg=0,0,0,100
DeceptiHover=0,0,0,250
;---
MusicBg=0,0,0,100
MusicHover=0,0,0,250
;---
LaunchBg=0,0,0,200
LaunchHover=0,0,0,250
;----
GeneralTint=255,255,255
AutoTint=255,255,255
DeceptiTint=255,255,255
MusicTint=255,255,255
LaunchTint=225,0,0

[LaunchHead]
Meter=String
MeterStyle=HeadStyle
FontColor=247,147,30
Text=Launcher Options
X=375
Y=5

[LaunchTipHead]
Meter=String
MeterStyle=SubHead
Text="Launcher Name        -        Launcher Path"
StringAlign=Center
X=375
Y=70

[Launch1NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 11"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 1"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch1Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName1#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch1PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 12"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 1"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch1Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath1#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch1BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath1" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 1"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch1Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r

[Launch2NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 13"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 2"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch2Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName2#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch2PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 14"]
MouseOverAction=[!SetOption Tooltip Text "Path of Launcher 1"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch2Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath2#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch2BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath2" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 2"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch2Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r

[Launch3NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 15"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 3"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch3Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName3#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch3PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 16"]
MouseOverAction=[!SetOption Tooltip Text "Path of Launcher 3"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch3Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath3#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch3BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath3" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 3"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch3Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r

[Launch4NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 17"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 4"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch4Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName4#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch4PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 18"]
MouseOverAction=[!SetOption Tooltip Text "Path of Launcher 4"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch4Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath4#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch4BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath4" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 4"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch4Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r

[Launch5NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 19"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 5"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch5Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName5#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch5PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 20"]
MouseOverAction=[!SetOption Tooltip Text "Path of Launcher 5"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch5Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath5#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch5BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath5" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 5"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch5Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r

[Launch6NameBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 21"]
MouseOverAction=[!SetOption Tooltip Text "Name of Launcher 6"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=150
Y=15R

[Launch6Name]
Meter=String
MeterStyle=TextStyle
Text=#LaunchName6#
ClipString=1
StringAlign=Right
X=355
Y=3r
W=240
H=21

[Launch6PathBack]
Meter=Shape
Shape=Rectangle 0,0,210,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=[!CommandMeasure "CommandCenter" "ExecuteBatch 22"]
MouseOverAction=[!SetOption Tooltip Text "Path of Launcher 6"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=400
Y=-3r

[Launch6Path]
Meter=String
MeterStyle=TextStyle
Text=#LaunchPath6#
ClipString=1
X=5r
Y=3r
W=200
H=21

[Launch6BrowseBack]
Meter=Shape
Shape=Rectangle 0,0,55,25 | Fill Color 120,120,120,175
LeftMouseDoubleClickAction=!Execute["#RainFile#" "File" "Variables" "LaunchPath6" "#config#" "['::{20D04FE0-3AEA-1069-A2D8-08002B30309D}']"]
MouseOverAction=[!SetOption Tooltip Text "Browse for Path 6"]
MouseLeaveAction=[!Setoption Tooltip Text "#ToolTip#"]
X=30R
Y=-3r

[Launch6Browse]
Meter=String
MeterStyle=TextStyle
Text=Browse
ClipString=1
X=5r
Y=3r