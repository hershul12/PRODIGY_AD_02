[Variables]
TypeW=1
TypeH=1
PaddingW=5
PaddingH=5


[FrostedGlass]
Measure=Plugin
Plugin=FrostedGlass
Type=#Win10Blur#
Border=All


[bg]
Meter=Image
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Height#+(#Padding#*2))*#ScaleDpi#
H=(#Height#+(#Padding#*2))*#ScaleDpi#
SolidColor=#colorskin#,#opacity#
SolidColor2=#colorskin2#,#opacity2#
GradientAngle=#angle#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint #colorskin2#,#opacity#][!UpdateMeter bg][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint #colorskin#,#opacity#][!UpdateMeter bg][!Redraw]




[btnstyle]
SolidColor=#colorskin2#,#opacity2#



[TextStyle]
X=(5+(#Height#/#xposition#))*#ScaleDpi#
Y=((#Height#/(#yposition#))+5)*#ScaleDpi#
StringAlign=#align#
FontFace=#fonttype#
FontColor=#textcolor2#,#PanelTitleOpacity#
FontSize=#defaultfontsize#*#ScaleDpi#
AntiAlias=1
ClipString=1
w=(#Height#/1.17)*#ScaleDpi#





[FullTextStyle]
X=15
StringAlign=LEFT
Y=15
W=(#Height#-20)
H=(#Height#/1.13-20)
ClipString=1
FontColor=#TextColor2#,#paneltitleopacity#
FontSize=(#Height#/16.4)
FontFace=#fonttype#
Antialias=1
solidcolor=0,0,0,1

[IconStyle]
X=(#Height#/5.8+5)*#ScaleDpi#
Y=(#Height#/7.8+#yposition#+5)*#ScaleDpi#
W=(#Height#/1.5)*#ScaleDpi#
H=(#Height#/1.5)*#ScaleDpi#
AntiAlias=1
LeftMouseUpAction=["#PanelAction#"]
ImageName=#IconLocation#
MouseActionCursor=1
[IconStyle2]
ImageTint=#textcolor2#,#paneltitleopacity#
[FullStyle]
X=(5-#Padding#)
Y=(5-#Padding#)
W=(#Height#+(#Padding#*2))*#ScaleDpi#
H=(#Height#+(#Padding#*2))*#ScaleDpi#
AntiAlias=1
ImageName=#IconLocation#
MouseActionCursor=1
LeftMouseUpAction=["#PanelAction#"]