grammar items;

items: item*;

item: ITEM ID LCB itemweight CM itemtype CM itemexamine RCB;

itemtype: INT;
itemweight: INT;
itemexamine: STRING;

value: STRING | INT;

ITEM : 'item';
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