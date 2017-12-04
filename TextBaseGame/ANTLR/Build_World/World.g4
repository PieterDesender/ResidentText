grammar World;

world: node* connection*;

node: NODE ID LCB nodeexamine CM nodeworldobjectlist RCB;

nodeexamine: STRING;
nodeworldobjectlist: LCB nodeworldobjectiteration RCB;
nodeworldobjectiteration: nodeworldobject*;
nodeworldobject: STRING;

connection:	CONNECTION LCB node1 CM node2 CM connectionstatus CM examineclosed CM examineopen CM keyid RCB;

node1: STRING;
node2: STRING;
connectionstatus: INT;
examineclosed: STRING;
examineopen: STRING;
keyid: STRING;

CONNECTION : 'connection';
NODE : 'node';
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