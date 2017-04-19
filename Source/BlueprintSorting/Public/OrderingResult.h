#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "OrderingResult.generated.h"

enum class ESortDirection : uint8;

UENUM(BlueprintType)
enum class ESortOrdering : uint8
{
    LessThan     UMETA(DisplayName = "Less Than"),
    Equal        UMETA(DisplayName = "Equal"),
    GreaterThan  UMETA(DisplayName = "Greater Than")
};

/**
 * The result of a comparison between two things.
 */
UCLASS(Blueprintable, BlueprintType)
class UOrderingResult : public UObject
{
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ESortOrdering Result;

    UFUNCTION()
    static UOrderingResult* MakeOrderingResult();

    UFUNCTION()
    static bool IsFirstAfterSecond(UOrderingResult* OrderingResult, ESortDirection SortDirection);
private:
};
