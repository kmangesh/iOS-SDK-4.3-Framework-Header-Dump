/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NSValueTransformer : XXUnknownSuperclass {
}
+(id)_transformerRegistry;
+(void)setValueTransformer:(id)transformer forName:(id)name;
+(id)valueTransformerForName:(id)name;
+(id)valueTransformerNames;
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)value;
-(id)reverseTransformedValue:(id)value;
@end
