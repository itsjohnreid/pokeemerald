ArtisanCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
	.byte 0

ArtisanCave_B1F_OnTransition:
	setflag FLAG_LANDMARK_ARTISAN_CAVE
	end

ArtisanCave_B1F_EventScript_Red::
	trainerbattle_single TRAINER_RED, ArtisanCave_B1F_Text_RedPreFight, ArtisanCave_B1F_Text_RedLose
	msgbox ArtisanCave_B1F_Text_RedPostFight, MSGBOX_AUTOCLOSE
	end

ArtisanCave_B1F_EventScript_Leaf::
	trainerbattle_single TRAINER_LEAF, ArtisanCave_B1F_Text_LeafPreFight, ArtisanCave_B1F_Text_LeafLose
	msgbox ArtisanCave_B1F_Text_LeafPostFight, MSGBOX_AUTOCLOSE
	end

ArtisanCave_B1F_Text_RedPreFight:
	.string "… … … … … …\p"
	.string "… … … … … …$"

ArtisanCave_B1F_Text_RedLose:
	.string "Well played.$"

ArtisanCave_B1F_Text_RedPostFight:
	.string "I better keep training.$"

ArtisanCave_B1F_Text_LeafPreFight:
	.string "… … … … … …\p"
	.string "… … … … … …$"

ArtisanCave_B1F_Text_LeafLose:
	.string "Wow, nice!$"

ArtisanCave_B1F_Text_LeafPostFight:
	.string "I'll keep training here\n"
	.string "for a while!$"
