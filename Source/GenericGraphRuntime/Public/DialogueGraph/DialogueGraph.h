﻿#pragma once

#include "CoreMinimal.h"
#include "DialogueGraphNode.h"
#include "GenericGraph.h"
#include "DialogueGraph.generated.h"

class UDialogueGraphNode;
class UNPCDialogueGraphNode;
class UPlayerDialogueGraphNode;

UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UDialogueGraph : public UGenericGraph
{
    GENERATED_BODY()

public:
    UDialogueGraph();
    
    UPROPERTY(EditDefaultsOnly, Category = "DialogueGraph")
    FLinearColor NPCDialogueNodeColor;

    UPROPERTY(EditDefaultsOnly, Category = "DialogueGraph")
    FLinearColor PlayerDialogueNodeColor;

private:
    FGameplayTagContainer ValidationTags;

public:
    /**
     * Initialize tags before start working with dialogue graph
     * @param GamePlayTags 
     */
    UFUNCTION(BlueprintCallable)
    void InitializeValidationTags(const FGameplayTagContainer& GamePlayTags);
    
    /**
     * Return start NPC Dialogue Node based on provided Tags
     * If Gameplay tags were not provided
     * return first node
     * @return UNPCDialogueGraphNode*
     */
    UFUNCTION(BlueprintCallable)
    UNPCDialogueGraphNode* GetStartDialogueNode() const;
    
    /**
     * Return NPC Dialogue Node from source Player Dialogue Node
     * @param SourceNode UPlayerDialogueGraphNode*
     * @return UNPCDialogueGraphNode*
     */
    UFUNCTION(BlueprintCallable)
    UNPCDialogueGraphNode* GetNPCDialogueNode(const UPlayerDialogueGraphNode* SourceNode) const;
    
    /**
     * Return Player Dialogue Nodes arrays form source NPC Dialogue Node
     * @param SourceNode UNPCDialogueGraphNode*
     * @return TArray<UPlayerDialogueGraphNode*>
     */
    UFUNCTION(BlueprintCallable)
    TArray<UPlayerDialogueGraphNode*> GetPlayerDialogueNodes(const UNPCDialogueGraphNode* SourceNode) const;
    
private:
    bool ValidateNodeByGamePlayTag(const UDialogueGraphNode* Node, const FGameplayTagContainer& GamePlayTags, bool bEmptyTagsNodeIsValid) const;
    UDialogueGraphNode* GetValidRootNode(const TArray<UGenericGraphNode*>& Nodes, const FGameplayTagContainer& GamePlayTags) const;
    TArray<UDialogueGraphNode*> GetValidNodes(const TArray<UGenericGraphNode*>& SourceNodes, const FGameplayTagContainer& GamePlayTags) const;


};