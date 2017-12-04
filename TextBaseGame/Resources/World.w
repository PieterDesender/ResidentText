node frontporch{
	"Front porch of the mansion, it looks old",
	{
		"windowfrontporch"
		"rockingchair"
	}
}

node hallwaysouth{
	"southern hallway, the paintings on the wall look creepy",
	{ "hallwaysouthstatue" }
}

node kitchen{
	"kitchen, ugh it stinks here",
	{ 
		"kitchencupboard" 
		"kitchennote"
		"kitchentable" 
	}
}

node pantry{
	"the pantry, nothing much here",
	{ 
	"keyholder"
	}
}

node hallwaynorth {
	"northern hallway, I see some strange statues",
	{ "hallwaynorthstatue" }
}

node livingroom {
	"this looks like a living room",
	{ 
	"livingroomtable"
	"livingroomstatue"
	"livingroomtv" 
	}
}

node diningroom {
	"this looks like a dining room",
	{  }
}

node terrace {
	"this is the terrace, ther are markings on the wall",
	{  }
}

node backjard {"",{}}

node toilet {
	"Just the bathroom, smells like a dead body in here",
	{}
}

node secondfloor{
	"Second floor of the house, It's even worse than downstairs.",
	{
	"secondfloorstatue"
	}
}

node bathroom{
	"The family bathroom looks like, the tub is filled with some kind of black go.",
	{
	"sink"
	"bathtub"
	}
}

node bedroom{
	"The master bedroom, huh looks cleaner than the rest of the house.",
	{
	"desk"
	"bookcase"
	"bed"
	}
}

node secretroom{
	"A secret room, someone must have something to hide.",
	{"computer"}
}

node garage{
	"A garage, I see tools hanging on the wall there is still blood dripping off them.",
	{
	"hangingbaggarage"
	"toolrack"
	}
}

connection{"frontporch","hallwaysouth",0,"Locked door and nobody is awnsering maybe if I look throught the window.","Front door open now.","frontdoorkey"} 
connection{"kitchen","hallwaysouth",1,"none","Door to kitchen, there are scratches on it.","none"}
connection{"kitchen","pantry",0,"Door is shut, strange keyhole almost looks like a snake","Door to the pantry, door is open now.","snakekey"}
connection{"hallwaynorth","hallwaysouth",1,"abc","nothing interesting here","none"}
connection{"hallwaynorth","livingroom",1,"abc","Door to the living room","none"}
connection{"diningroom","livingroom",0,"This door is completely bolted shut, no way I'm getting this open.","none","none"}
connection{"diningroom","kitchen",0,"Door is shut, hmm keyhole is coverd in spiders.","Door is now open.","spiderkey"}
connection{"diningroom","terrace",1,"abc","Just a door.","none"}
connection{"backjard","terrace",0,"Door leading outside, closed shut.","Door leading outside.","backdoorkey"}
connection{"toilet","hallwaynorth",0,"toilet door, closed shut.","toilet door.","none"}
connection{"secondfloor","hallwaynorth",1,"abc","Stairs to the second floor.","none"}
connection{"secondfloor","bathroom",0,"Bathroom door, Closed but looks like someone went to town with it with an axe.","Bathroom door, huh the monster destroyed it.","none"}
connection{"secondfloor","bedroom",0,"Door is shut, strange keyhole almost looks like a spider","Bedroom door it's open.","spiderkey"}
connection{"hallwaysouth","garage",0,"abc","Door is shut and no way i see to open it.","none"}



