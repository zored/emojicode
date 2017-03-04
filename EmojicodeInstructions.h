//
//  EmojicodeInstructions.h
//  Emojicode
//
//  Created by Theo Weidmann on 26/11/2016.
//  Copyright © 2016 Theo Weidmann. All rights reserved.
//

#ifndef EmojicodeInstructions_h
#define EmojicodeInstructions_h

enum EmojicodeInstructionConstants {
    INS_DISPATCH_METHOD = 0x1,
    INS_DISPATCH_TYPE_METHOD = 0x2,
    INS_DISPATCH_PROTOCOL = 0x3,
    INS_NEW_OBJECT = 0x4,
    INS_DISPATCH_SUPER = 0x5,
    INS_CALL_CONTEXTED_FUNCTION = 0x6,
    INS_CALL_FUNCTION = 0x7,
    INS_PRODUCE_TO_AND_GET_VT_REFERENCE = 0x8,
    INS_INIT_VT = 0x9,
    INS_GET_VT_REFERENCE_STACK = 0xA,
    INS_GET_VT_REFERENCE_OBJECT = 0xB,
    INS_GET_VT_REFERENCE_VT = 0xC,
    INS_GET_CLASS_FROM_INSTANCE = 0xE,
    INS_GET_CLASS_FROM_INDEX = 0xF,
    INS_GET_STRING_POOL = 0x10,
    INS_GET_TRUE = 0x11,
    INS_GET_FALSE = 0x12,
    INS_GET_32_INTEGER = 0x13,
    INS_GET_64_INTEGER = 0x14,
    INS_GET_DOUBLE = 0x15,
    INS_GET_SYMBOL = 0x16,
    INS_GET_NOTHINGNESS = 0x17,
    INS_PRODUCE_WITH_STACK_DESTINATION = 0x18,
    INS_PRODUCE_WITH_OBJECT_DESTINATION = 0x19,
    INS_PRODUCE_WITH_VT_DESTINATION = 0x81,
    INS_INCREMENT = 0x1A,
    INS_DECREMENT = 0x1B,
    INS_COPY_SINGLE_STACK = 0x1C,
    INS_COPY_WITH_SIZE_STACK = 0x1D,
    INS_COPY_SINGLE_OBJECT = 0x1E,
    INS_COPY_WITH_SIZE_OBJECT = 0x1F,
    INS_COPY_SINGLE_VT = 0x80,
    INS_COPY_WITH_SIZE_VT = 0x82,
    INS_EQUAL_PRIMITIVE = 0x20,
    INS_SUBTRACT_INTEGER = 0x21,
    INS_ADD_INTEGER = 0x22,
    INS_MULTIPLY_INTEGER = 0x23,
    INS_DIVIDE_INTEGER = 0x24,
    INS_REMAINDER_INTEGER = 0x25,
    INS_INVERT_BOOLEAN = 0x26,
    INS_OR_BOOLEAN = 0x27,
    INS_AND_BOOLEAN = 0x28,
    INS_LESS_INTEGER = 0x29,
    INS_GREATER_INTEGER = 0x2A,
    INS_GREATER_OR_EQUAL_INTEGER = 0x2C,
    INS_LESS_OR_EQUAL_INTEGER = 0x2B,
    INS_SAME_OBJECT = 0x2D,
    INS_IS_NOTHINGNESS = 0x2E,
    INS_EQUAL_DOUBLE = 0x2F,
    INS_SUBTRACT_DOUBLE = 0x30,
    INS_ADD_DOUBLE = 0x31,
    INS_MULTIPLY_DOUBLE = 0x32,
    INS_DIVIDE_DOUBLE = 0x33,
    INS_LESS_DOUBLE = 0x34,
    INS_GREATER_DOUBLE = 0x35,
    INS_LESS_OR_EQUAL_DOUBLE = 0x36,
    INS_GREATER_OR_EQUAL_DOUBLE = 0x37,
    INS_REMAINDER_DOUBLE = 0x38,
    INS_INT_TO_DOUBLE = 0x39,
    INS_UNWRAP_SIMPLE_OPTIONAL = 0x3A,
    INS_UNWRAP_BOX_OPTIONAL = 0x3F,
    INS_ERROR_CHECK_SIMPLE_OPTIONAL = 0x90,
    INS_ERROR_CHECK_BOX_OPTIONAL = 0x91,
    INS_GET_THIS = 0x3C,
    INS_SUPER_INITIALIZER = 0x3D,
    INS_CONDITIONAL_PRODUCE_BOX = 0x3E,
    INS_CONDITIONAL_PRODUCE_SIMPLE_OPTIONAL = 0x86,
    INS_COPY_REFERENCE = 0x87,
    // Know it’s an object instance and want to cast it to a subclass
    INS_DOWNCAST_TO_CLASS = 0x40,
    INS_CAST_TO_PROTOCOL = 0x41,
    INS_CAST_TO_CLASS = 0x42,
    INS_CAST_TO_VALUE_TYPE = 0x44,
    INS_SIMPLE_OPTIONAL_PRODUCE = 0x4A,
    INS_BOX_PRODUCE = 0x4B,
    INS_UNBOX = 0x83,
    INS_BOX_TO_SIMPLE_OPTIONAL_PRODUCE = 0x84,
    INS_SIMPLE_OPTIONAL_TO_BOX = 0x85,
    INS_BINARY_AND_INTEGER = 0x5A,
    INS_BINARY_OR_INTEGER = 0x5B,
    INS_BINARY_XOR_INTEGER = 0x5C,
    INS_BINARY_NOT_INTEGER = 0x5D,
    INS_SHIFT_LEFT_INTEGER = 0x5E,
    INS_SHIFT_RIGHT_INTEGER = 0x5F,
    INS_REPEAT_WHILE = 0x61,
    INS_IF = 0x62,
    INS_RETURN = 0x60,
    INS_ERROR = 0x63,
    INS_IS_ERROR = 0x92,
    INS_EXECUTE_CALLABLE = 0x70,
    INS_CLOSURE = 0x71,
    INS_CAPTURE_METHOD = 0x72,
    INS_CAPTURE_TYPE_METHOD = 0x73,
    INS_CAPTURE_CONTEXTED_FUNCTION = 0x74,

    INS_OPT_DICTIONARY_LITERAL = 0xA0,
    INS_OPT_LIST_LITERAL = 0xA1,
    INS_OPT_STRING_CONCATENATE_LITERAL = 0xA2,
    INS_OPT_FOR_IN_LIST = 0xA3,
    INS_OPT_FOR_IN_RANGE = 0xA4,
};

#endif /* EmojicodeInstructions_h */
