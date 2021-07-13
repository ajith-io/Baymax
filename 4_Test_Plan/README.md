# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |`Get Proper User name`|  String | User detail stored as string|String stored|Requirement based |
|  H_02       |`Get proper value to choose between US and Metric Units`|  int value '1' or '2' |selects unit |unit selected |Scenario based   |
|  H_03       |`Get proper Height and Weight for US Units|  int value `|int updates user struct |int stored |Requirement based    |
|  H_04       |`Get proper Height and Weight for US Units| int value `|int updates user struct|int stored|Requirement based    |

## Table no: Low level test plan

| **Test ID**| **Under ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|---------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01 |  H_01    |`Only accept string else prompt error and ask again.`|  String | User detail stored as string|String stored|Requirement based |
|  L_02 |  H_01    |`Check for numbers symbols|  String `| User detail stored as string|String stored|Requirement based |
|  L_03 |  H_01    |`convert all the characters to lowercase if any provided with varying cases`|  String | User detail stored as string|String stored|Requirement based |
|  L_01  | H_02      |`Get proper value to choose between US and Metric Units`|  int value '1' or '2' |selects unit |unit selected |Scenario based   |
|  L_01 | H_03       |`Only accept string else prompt error and ask again`|  int value |int updates user struct |int stored |Requirement based    |
|  L_02 | H_03       |`check if the entered value is a character or symbol`|  int value |int updates user struct |int stored |Requirement based    |
|  L_03 | H_03       |`check if height & weight is provided in valid range`|  int value |int updates user struct |int stored |Requirement based    |
|  L_01 | H_04       |`Only accept string else prompt error and ask again`|  int value |int updates user struct |int stored |Requirement based    |
|  L_02 | H_04       |`check if the entered value is a character or symbol`|  int value |int updates user struct |int stored |Requirement based    |
|  L_03 | H_04       |`check if height & weight is provided in valid range`|  int value |int updates user struct |int stored |Requirement based    |
