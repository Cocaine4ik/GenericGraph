# GenericGraphPlugin
==================

![photo_2024-02-16_13-32-43](https://github.com/Cocaine4ik/GenericGraph/assets/35273835/b797f78d-4f3a-4c2b-9cd9-99fdc4ca0689)

Generic graph data structure plugin version extended for working with dialogues
Works with both Unreal Engine 4 and 5

Feature Base
-------

* Custom asset type
* UE4/UE5 BehaviorTree-like asset editor
* Extendable graph node type
* Extendable graph edge type
* Extendable graph type(new asset type with generic graph editor, C++ only)

Feature Extended
-------

* Dialogue graph data asset type
* UE4/UE5 BehaviorTree-like asset editor
* Player and NPC Dialogues Nodes
* GameplayTag System 
* Conditions and Results structs of the dialogue choices
* Structs can be extended
* Localization support
* Blueprints friendly interface

Usage Base
-----

* Ability system
* Dialogue system
* Quest system
* Etc

Usage Extended
-----
* Dialogue system with choices and results based on GameplayTags

Install
-------

1. Clone this project to ${YourProject}/Plugins/
2. Generate project file
3. Compile

Tutorial
--------

1. Store Dialogue Graph object where you need to access Dialogue Nodes.
2. Initialize your GamePlayTags for provided Dialogue Graph. Use InitializeValidationTags() method.
3. Use GetStartDialogueNode() to get first NPC Node. If Dialogue Graph have few brunches.
Brunch will be chosen based on provided tags.
4. Use get GetPlayerDialoguesNodes() or GetNPCDialoguesNodes() to return nodes from source node.
Important! PlayerNodes must return NPC Nodes. NPC Nodes must return player nodes. Build you graph properly!
5. Use GetVisualData() in node to return Node visual data.
6. Use GetConditionData() in NPC or Player Node to return node condition data (GameplayTags).
7. Use GetResultData() in Player node to return node result data (GameplayTags).
