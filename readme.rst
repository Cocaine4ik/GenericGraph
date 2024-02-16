GenericGraphPlugin
==================

Generic graph data structure plugin version extended for working with dialogues
Works with both Unreal Engine 4 and 5

.. image:: docs/images/GenericGraph.png

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
* Condition and Result of the dialogue choices

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

#. Clone this project to ${YourProject}/Plugins/
#. Generate project file
#. Compile

Tutorial
--------

`Dialogue System`_ (WIP)

Example
-------

Dialogue System and ability system: SRPGTemplate_

.. image:: docs/images/dialogue/dialogue01.png

.. image:: docs/images/dialogue/dialogue02.png

.. image:: docs/images/dialogue/dialogue03.png

.. image:: docs/images/ability-graph.png

.. _Dialogue System: https://jinyuliao.github.io/blog/html/2017/12/15/ue4_dialogue_system_part1.html
.. _SRPGTemplate: https://github.com/jinyuliao/SRPGTemplate
