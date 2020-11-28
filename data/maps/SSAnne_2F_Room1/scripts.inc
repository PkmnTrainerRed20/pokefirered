SSAnne_2F_Room1_MapScripts::
	.byte 0

SSAnne_2F_Room1_EventScript_Gentleman::
	lock
	faceplayer
	message SSAnne_2F_Room1_Text_SleepingMonLookedLikeThis
	waitmessage
	setvar VAR_0x8004, SPECIES_MEW
	special SetSeenMon
	drawmonpic SPECIES_MEW, 10, 3
	waitbuttonpress
	erasemonpic
	setvar VAR_0x8004, SPECIES_GROUDON
	special SetSeenMon
	drawmonpic SPECIES_GROUDON, 10, 3
	waitbuttonpress
	erasemonpic
	setvar VAR_0x8004, SPECIES_KYOGRE
	special SetSeenMon
	drawmonpic SPECIES_KYOGRE, 10, 3
	waitbuttonpress
	erasemonpic
	setvar VAR_0x8004, SPECIES_HO_OH
	special SetSeenMon
	drawmonpic SPECIES_HO_OH, 10, 3
	waitbuttonpress
	erasemonpic
	setvar VAR_0x8004, SPECIES_LUGIA
	special SetSeenMon
	drawmonpic SPECIES_LUGIA, 10, 3
	waitbuttonpress
	erasemonpic
	setvar VAR_0x8004, SPECIES_DEOXYS
	special SetSeenMon
	drawmonpic SPECIES_DEOXYS, 10, 3
	waitbuttonpress
	erasemonpic
	release
	end
