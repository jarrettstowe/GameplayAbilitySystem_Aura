// Copyright Jarry


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

#define DECLARE_GAMEPLAY_TAG(FNameParam, FNameTag, FStringParam) \
	GameplayTags.FNameParam = UGameplayTagsManager::Get().AddNativeGameplayTag( \
	FName(FNameTag), \
	FString(FStringParam) \
	)

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Primary Attributes
	 */
	
	DECLARE_GAMEPLAY_TAG(Attributes_Primary_Strength, "Attributes.Primary.Strength", "Increases physical damage");
	DECLARE_GAMEPLAY_TAG(Attributes_Primary_Intelligence, "Attributes.Primary.Intelligence", "Increases magical damage");
	DECLARE_GAMEPLAY_TAG(Attributes_Primary_Resilience, "Attributes.Primary.Resilience", "Increases Armor and Armor Penetration");
	DECLARE_GAMEPLAY_TAG(Attributes_Primary_Vigor, "Attributes.Primary.Vigor", "Increases Max Health");

	/*
	 * Secondary Attributes
	 */
	
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_Armor, "Attributes.Secondary.Armor", "Reduces damage taken, improves block chance");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_ArmorPenetration, "Attributes.Secondary.ArmorPenetration", "Ignores percentage of enemy Armor, increases Critical Hit Chance");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_BlockChance, "Attributes.Secondary.BlockChance", "Chance to cut incoming damage in half");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_CriticalHitChance, "Attributes.Secondary.CriticalHitChance", "Chance to double damage plus critical hit bonus");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_CriticalHitDamage, "Attributes.Secondary.CriticalHitDamage", "Bonus damage added when a critical hit is scored");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_CriticalHitResistance, "Attributes.Secondary.CriticalHitResistance", "Reduces Critical Hit Chance of attacking enemies");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_HealthRegeneration, "Attributes.Secondary.HealthRegeneration", "Amount of Health regenerated every 1 second");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_ManaRegeneration, "Attributes.Secondary.ManaRegeneration", "Amount of Mana regenerated every 1 second");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_MaxHealth, "Attributes.Secondary.MaxHealth", "Maximum amount of Health obtainable");
	DECLARE_GAMEPLAY_TAG(Attributes_Secondary_MaxMana, "Attributes.Secondary.MaxMana", "Maximum amount of Mana obtainable");
	
	/*
	 * Old code for ref
	 * 
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Secondary.Armor"),
		FString("Reduces damage taken, improves block chance")
		);
	*/
}
