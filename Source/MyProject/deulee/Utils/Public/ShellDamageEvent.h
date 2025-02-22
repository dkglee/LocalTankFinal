#pragma once

#include "CoreMinimal.h"
#include "EShellID.h"
#include "ShellBasicInfo.h"
#include "Engine/DamageEvents.h"
#include "ShellDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FShellDamageEvent : public FDamageEvent
{
	GENERATED_BODY();
public:
	static const int32 ClassID = 101;

	UPROPERTY(BlueprintReadWrite)
	FVector ImpactLocation = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite)
	FVector ImpactNormal = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite)
	EShellID ShellID = EShellID::None;
	UPROPERTY(BlueprintReadWrite)
	FShellBasicInfo ShellInfo = FShellBasicInfo();
};
