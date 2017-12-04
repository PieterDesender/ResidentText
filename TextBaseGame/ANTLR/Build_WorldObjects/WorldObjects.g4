grammar WorldObjects;

worldobjects: worldobject*;

worldobject: WORLDOBJECT ID LCB worldobjectname CM worldobjectexamine CM worldobjectitemlist RCB;

worldobjectname: STRING;
worldobjectexamine: STRING;
worldobjectitemlist: LCB worldobjectitemiteration RCB;
worldobjectitemiteration: worldobjectitem*;
worldobjectitem: STRING;

WORLDOBJECT: 'worldobject';
LCB: '{';
RCB: '}';
EQ: '=';
SC: ';';
CM: ',';
ID : [a-zA-Z][a-zA-Z0-9_]* ;  
STRING: '"' ~('"')* '"';
INT: [+-]?[0-9]+;       
WS : [ \t\r\n]+ -> skip ;
SPACE: ' ' -> skip; 