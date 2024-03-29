
[cat4Bg]
Meter=Image
SolidColor=0,0,0,1
W=((#galleryW#-320)*#ScaleDpi#)
h=(950*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=0
Group=cat4 | Bye
DynamicVariables=1
Hidden=1
[cat4BgBottom]
Meter=Image
SolidColor=0,0,0,1
W=((#galleryW#-320)*#ScaleDpi#)
h=(700*#ScaleDpi#)
x=(320*#ScaleDpi#)
Y=R
Group=cat4 | Bye
DynamicVariables=1
Hidden=1
[cat4Title]
Meter=String
Text="#CustomPanels#"
Group=cat4 | Bye
MeterStyle=CatHeaderTitle
Y=(-1600*#ScaleDpi#)R
[cat4Subtitle1]
Meter=String
Text=" #BuildingTools#"
Group=cat4 | Bye
MeterStyle=CatSubTitle
Y=R
[Create]
Meter=Image
MeterStyle=EssentialPanel
Group=cat4 | Bye
X=(360*#ScaleDpi#)
ImageName=#@#\Graphics\Gallery\icons\panelcreator.png
y=R
ImageTint=#textcolor2#
LeftMouseUpAction=[!ActivateConfig "wp7\TextItems\Extra\MissingComponents"][!ActivateConfig "WP7\TextItems\Extra\ExtraBuilder" "PanelBuilder.ini"]
ToolTipText=Panel Creator
[Create2]
Meter=Image
MeterStyle=EssentialPanel
Group=cat4 | Bye
ImageTint=#textcolor2#,#paneltitleopacity#
ImageName=#@#\Graphics\Gallery\icons\panelcreator2.png
LeftMouseUpAction=[!ActivateConfig "wp7\TextItems\Extra\MissingComponents"][!ActivateConfig "WP7\TextItems\Extra\ExtraBuilder" "ExtraBuilder.ini"]
ToolTipText=Extras Creator
[cat4Subtitle2]
Meter=String
Text=" #ItemscreatedwithPanelCreator#"
Group=cat4 | Bye
MeterStyle=CatSubTitle
Y=(20*#ScaleDpi#)R
[c1]
Meter=Image
MeterStyle=EssentialPanelBlank
X=(360*#ScaleDpi#)
y=R
ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name1#\Item.png"
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name1#" "Item.ini"
[c2]
Meter=Image
MeterStyle=EssentialPanelBlank
ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name2#\Item.png"
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name2#" "Item.ini"
[c3]
Meter=Image
MeterStyle=EssentialPanelBlank
ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name3#\Item.png"
LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name3#" "Item.ini"

[c4]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name4#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name4#" "Item.ini"
[c5]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name5#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name5#" "Item.ini"
[c6]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name6#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name6#" "Item.ini"
[c7]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name7#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name7#" "Item.ini"
[c8]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name8#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name8#" "Item.ini"
[c9]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name9#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name9#" "Item.ini"
Y=(1*#ScaleDpi#)R
X=(360*#ScaleDpi#)
[c10]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name10#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name10#" "Item.ini"
[c11]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name11#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name11#" "Item.ini"
[c12]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name12#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name12#" "Item.ini"
[c13]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name13#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name13#" "Item.ini"
[c14]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name14#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name14#" "Item.ini"
[c15]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name15#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name15#" "Item.ini"
[c16]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name16#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name16#" "Item.ini"
[c17]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name17#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name17#" "Item.ini"
Y=(1*#ScaleDpi#)R
X=(360*#ScaleDpi#)
[c18]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name18#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name18#" "Item.ini"
[c19]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name19#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name19#" "Item.ini"
[c20]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name20#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name20#" "Item.ini"
[c21]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name21#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name21#" "Item.ini"
[c22]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name22#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name22#" "Item.ini"
[c23]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name23#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name23#" "Item.ini"
[c24]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name24#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name24#" "Item.ini"
[c25]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name25#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name25#" "Item.ini"
Y=(1*#ScaleDpi#)R
x=(360*#ScaleDpi#)
[c26]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name26#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name26#" "Item.ini"
[c27]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name27#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name27#" "Item.ini"
[c28]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name28#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name28#" "Item.ini"
[c29]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name29#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name29#" "Item.ini"
[c30]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name30#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name30#" "Item.ini"
[c31]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name31#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name31#" "Item.ini"
[c32]
Meter=Image
MeterStyle=EssentialPanelBlank
 ImageName="#ROOTCONFIGPATH#Panels\#CustomPanels\#Name32#\Item.png" 
 LeftMouseUpAction=!ToggleConfig "WP7\Panels\#CustomPanels\#Name32#" "Item.ini"
 




[edit]

Meter=Image

LeftMouseUpAction=[!ToggleMeterGroup Del][!Update]
ImageName=#@#\Graphics\Gallery\edit.png
x=(820)*#scaledpi#
y=(470)*#scaledpi#
w=(25*#scaledpi#)
ToolTipText=#Edit#
imagetint=#tttextcolor#
MouseActionCursor=1






[StylDel]
Hidden=1
Y=r
X=(61*#ScaleDpi#)r
w=(60*#ScaleDpi#)
h=(60*#ScaleDpi#)
AntiAlias=1
MouseActionCursor=1
Group=Del |  Bye
;LeftMouseUpAction=["#@#Common\PanelCreator\PanelCreator.exe" "#SKINSPATH#" Delete #CURRENTSECTION# "#PROGRAMPATH#"]
LeftMouseUpAction=["#@#Common\OmnimoApp.exe" CreatePanelDelete #CURRENTSECTION# "#CURRENTPATH#" "#PROGRAMPATH#" "#SKINSPATH#"]
imagealpha=100

[1]
Meter=Image
MeterStyle=StylDel
X=(360*#ScaleDpi#)
y=(210*#ScaleDpi#)
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name1#\delete1.png

[2]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name2#\delete1.png

[3]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name3#\delete1.png

[4]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name4#\delete1.png

[5]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name5#\delete1.png

[6]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name6#\delete1.png

[7]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name7#\delete1.png

[8]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name8#\delete1.png

[9]
Meter=Image
MeterStyle=StylDel
Y=(1*#ScaleDpi#)R
X=(360*#ScaleDpi#)
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name9#\delete1.png

[10]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name10#\delete1.png

[11]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name11#\delete1.png

[12]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name12#\delete1.png

[13]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name13#\delete1.png

[14]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name14#\delete1.png

[15]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name15#\delete1.png

[16]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name16#\delete1.png


[17]
Meter=Image
MeterStyle=StylDel
Y=(1*#ScaleDpi#)R
X=(360*#ScaleDpi#)
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name17#\delete1.png

[18]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name18#\delete1.png

[19]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name19#\delete1.png

[20]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name20#\delete1.png

[21]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name21#\delete1.png

[22]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name22#\delete1.png

[23]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name23#\delete1.png

[24]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name24#\delete1.png


[25]
Meter=Image
MeterStyle=StylDel
Y=(1*#ScaleDpi#)R
X=(360*#ScaleDpi#)
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name25#\delete1.png

[26]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name26#\delete1.png

[27]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name27#\delete1.png

[28]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name28#\delete1.png

[29]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name29#\delete1.png

[30]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name30#\delete1.png

[31]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name31#\delete1.png

[32]
Meter=Image
MeterStyle=StylDel
ImageName=#SKINSPATH#\WP7\Panels\#CustomPanels\#Name32#\delete1.png
