# TEST PLAN

## High Level Test Plan

| ID | Description | Expected IP | Expected OP | Actual OP | Category |  
| ----- | ----- | ------- | -------- | ------ | ------ |
| HL01 | Locking the door | Button pressed 1 time | Door locked | Door Locked | Technical | 
| HL02 | Unlocking the door | Button pressed 2 times | Door unlocked | Door unlocked | Technical |
| HL03 | Triggering wiper system | Button pressed 3 times | Wiper turned ON | Wiper turned ON| Technical | 
| HL04 | Turning the wiper OFF| Button pressed 4 times | Wiper turned OFF | Wiper turned OFF | Technical |

## Low Level Test Plan

| ID | Description | Expected IP | Expected OP | Actual OP | Category |  
| ----- | ----- | ------- | ------ | ------ | ----- |
| LL01 | Car ON condition | Button pressed 1 time | The Red LED is ON | The Red LED is ON | HL01 | 
| LL02 | Wiper activated | Button pressed 2 times | Blue, Green and Orange LEDs come ON | Blue, Green and Orange LEDs come ON | HL02 |
| LL03 | Wiper deactivated | Button pressed 3 times | Blue, Green and Orange LEDs come OFF | Blue, Green and Orange LEDs come OFF| HL03 | 
| LL04 | Car OFF condition | Button pressed 4 times | Red LED OFF | Red LED OFF | HL04 |
