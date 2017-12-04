grammar interactions;

interactions: usekey | moveto | look | searchobject | examineobject | examinedoor | pickupitem | useitem | dropitem | inventoryshow | statusself | inventoryexamine;

moveto: MOVEINTERACTION SPACE STRING;
look: LOOKINTERACTION;
examineobject: EXAMINEINTERACTION SPACE STRING;
examinedoor: EXAMINEINTERACTION SPACE DOOR SPACE STRING;
searchobject: SEARCHINTERACTION SPACE STRING;
inventoryshow: INVENTORYINTERACTION;	 
pickupitem: PICKUPINTERACTION SPACE STRING;
dropitem: DROPITEMINTERACTION SPACE STRING;
useitem: USEITEMINTERACTION SPACE STRING;
statusself: STATUS;
inventoryexamine: INVENTORYINTERACTION SPACE EXAMINEINTERACTION SPACE STRING;
usekey: USEKEYINTERACTION SPACE STRING;

MOVEINTERACTION : 'go to' | 'move to' | 'm';
LOOKINTERACTION : 'look' | 'look around' | 'l';
EXAMINEINTERACTION : 'examine' | 'look at' | 'e';
SEARCHINTERACTION : 'search' | 's';
DOOR : 'door' | 'd';
PICKUPINTERACTION: 'pickup' | 'take' | 'p';
USEITEMINTERACTION: 'use' | 'u';
DROPITEMINTERACTION: 'drop' | 'dr';
INVENTORYINTERACTION: 'inventory' | 'i' | 'inv';
STATUS: 'st' | 'status';
USEKEYINTERACTION: 'use key' | 'uk';

SPACE: ' '; 
STRING: [a-zA-Z][a-zA-Z]*;
INT: [+-]?[0-9]+;       