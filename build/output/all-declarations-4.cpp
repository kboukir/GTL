#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString geOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_geOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlString temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2097)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2096)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2097))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2094)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2100)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2100)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_geOp (defineExtensionGetter_gtlString_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString ltOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_ltOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlString temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2109)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2108)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2109))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2106)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2112)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2112)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_ltOp (defineExtensionGetter_gtlString_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString leOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_leOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlString temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2121)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2120)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2121))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2118)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2124)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2124)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_leOp (defineExtensionGetter_gtlString_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlString embeddedType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlString_embeddedType (const cPtr_gtlData * /* inObject */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_string) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                     extensionGetter_gtlString_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_embeddedType (defineExtensionGetter_gtlString_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlString addMyValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlString_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2135))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2135)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlString_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                   extensionMethod_gtlString_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlString_addMyValue (defineExtensionMethod_gtlString_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlString performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_performGetter (const cPtr_gtlData * inObject,
                                                               const GALGAS_lstring & constinArgument_methodName,
                                                               const GALGAS_gtlDataList & constinArgument_arguments,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2147)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2148)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2148)) ;
    }
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2150)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2150)), object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2149)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2152)).objectCompare (GALGAS_string ("charAtIndex"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2153)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2153)) ;
      }
      GALGAS_gtlInt temp_2 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr ())) {
          temp_2 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)) ;
        }
      }
      GALGAS_uint var_index_66317 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2154)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)) ;
      result_result = GALGAS_gtlChar::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2156)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2156)), object->mAttribute_value.getter_characterAtIndex (var_index_66317, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2156))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2155)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2158)).objectCompare (GALGAS_string ("indexOfChar"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2159)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2159)) ;
        }
        GALGAS_gtlChar temp_4 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr ())) {
            temp_4 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr () ;
          }else{
            inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)) ;
          }
        }
        GALGAS_char var_lookedUpChar_66616 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2160)) ;
        GALGAS_uint var_index_66681 = GALGAS_uint ((uint32_t) 0U) ;
        GALGAS_uint var_length_66702 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2162)) ;
        GALGAS_bool var_found_66735 = GALGAS_bool (false) ;
        if (var_length_66702.isValid ()) {
          uint32_t variant_66752 = var_length_66702.uintValue () ;
          bool loop_66752 = true ;
          while (loop_66752) {
            GALGAS_bool test_5 = var_found_66735.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2165)) ;
            if (kBoolTrue == test_5.boolEnum ()) {
              test_5 = GALGAS_bool (kIsStrictInf, var_index_66681.objectCompare (var_length_66702)) ;
            }
            loop_66752 = test_5.isValid () ;
            if (loop_66752) {
              loop_66752 = test_5.boolValue () ;
            }
            if (loop_66752 && (0 == variant_66752)) {
              loop_66752 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2164)) ;
            }
            if (loop_66752) {
              variant_66752 -- ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_characterAtIndex (var_index_66681, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2166)).objectCompare (var_lookedUpChar_66616)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_found_66735 = GALGAS_bool (true) ;
              }else if (kBoolFalse == test_6) {
                var_index_66681.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2169)) ;
              }
            }
          }
        }
        GALGAS_bigint temp_7 ;
        const enumGalgasBool test_8 = var_found_66735.boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = var_index_66681.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2175)) ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2175)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2175)) ;
        }
        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2173)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2174)), temp_7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2172)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2177)).objectCompare (GALGAS_string ("indexOfCharInRange"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2178)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2178)) ;
          }
          GALGAS_gtlChar temp_10 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr ())) {
              temp_10 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)) ;
            }
          }
          GALGAS_char var_minChar_67205 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2179)) ;
          GALGAS_gtlChar temp_11 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr ())) {
              temp_11 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)) ;
            }
          }
          GALGAS_char var_maxChar_67272 = temp_11.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2180)) ;
          GALGAS_uint var_index_67337 = GALGAS_uint ((uint32_t) 0U) ;
          GALGAS_uint var_length_67358 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2182)) ;
          GALGAS_bool var_found_67391 = GALGAS_bool (false) ;
          if (var_length_67358.isValid ()) {
            uint32_t variant_67408 = var_length_67358.uintValue () ;
            bool loop_67408 = true ;
            while (loop_67408) {
              GALGAS_bool test_12 = var_found_67391.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2185)) ;
              if (kBoolTrue == test_12.boolEnum ()) {
                test_12 = GALGAS_bool (kIsStrictInf, var_index_67337.objectCompare (var_length_67358)) ;
              }
              loop_67408 = test_12.isValid () ;
              if (loop_67408) {
                loop_67408 = test_12.boolValue () ;
              }
              if (loop_67408 && (0 == variant_67408)) {
                loop_67408 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2184)) ;
              }
              if (loop_67408) {
                variant_67408 -- ;
                GALGAS_char var_currentChar_67482 = object->mAttribute_value.getter_characterAtIndex (var_index_67337, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)) ;
                GALGAS_bool test_13 = GALGAS_bool (kIsSupOrEqual, var_currentChar_67482.objectCompare (var_minChar_67205)) ;
                if (kBoolTrue == test_13.boolEnum ()) {
                  test_13 = GALGAS_bool (kIsInfOrEqual, var_currentChar_67482.objectCompare (var_maxChar_67272)) ;
                }
                const enumGalgasBool test_14 = test_13.boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_found_67391 = GALGAS_bool (true) ;
                }else if (kBoolFalse == test_14) {
                  var_index_67337.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2190)) ;
                }
              }
            }
          }
          GALGAS_bigint temp_15 ;
          const enumGalgasBool test_16 = var_found_67391.boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = var_index_67337.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2196)) ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2196)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2196)) ;
          }
          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2194)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2195)), temp_15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2193)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2198)).objectCompare (GALGAS_string ("containsChar"))).boolEnum () ;
          if (kBoolTrue == test_17) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2199)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2199)) ;
            }
            GALGAS_gtlChar temp_18 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr ())) {
                temp_18 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr () ;
              }else{
                inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
              }
            }
            GALGAS_char var_lookedUpChar_67912 = temp_18.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2202)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2203)), object->mAttribute_value.getter_containsCharacter (var_lookedUpChar_67912 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2204))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2201)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2206)).objectCompare (GALGAS_string ("containsCharInRange"))).boolEnum () ;
            if (kBoolTrue == test_19) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)) ;
              }
              GALGAS_gtlChar temp_20 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr ())) {
                  temp_20 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)) ;
                }
              }
              GALGAS_char var_minChar_68235 = temp_20.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2208)) ;
              GALGAS_gtlChar temp_21 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr ())) {
                  temp_21 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)) ;
                }
              }
              GALGAS_char var_maxChar_68302 = temp_21.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2209)) ;
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2211)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2212)), object->mAttribute_value.getter_containsCharacterInRange (var_minChar_68235, var_maxChar_68302 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2213))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2210)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2215)).objectCompare (GALGAS_string ("HTMLRepresentation"))).boolEnum () ;
              if (kBoolTrue == test_22) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)) ;
                }
                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2218)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)), object->mAttribute_value.getter_HTMLRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2218))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)) ;
              }else if (kBoolFalse == test_22) {
                const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2220)).objectCompare (GALGAS_string ("identifierRepresentation"))).boolEnum () ;
                if (kBoolTrue == test_23) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2221)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2221)) ;
                  }
                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2223)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2223)), object->mAttribute_value.getter_identifierRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2223))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2222)) ;
                }else if (kBoolFalse == test_23) {
                  const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2225)).objectCompare (GALGAS_string ("fileExists"))).boolEnum () ;
                  if (kBoolTrue == test_24) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2226)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2226)) ;
                    }
                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2228)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2228)), object->mAttribute_value.getter_fileExists (SOURCE_FILE ("gtl_data_types.galgas", 2228))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2227)) ;
                  }else if (kBoolFalse == test_24) {
                    const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2230)).objectCompare (GALGAS_string ("lowercaseString"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)) ;
                      }
                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2233)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2233)), object->mAttribute_value.getter_lowercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2233))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2232)) ;
                    }else if (kBoolFalse == test_25) {
                      const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2235)).objectCompare (GALGAS_string ("length"))).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2236)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2236)) ;
                        }
                        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2238)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)), object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2238)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2238))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2237)) ;
                      }else if (kBoolFalse == test_26) {
                        GALGAS_bool test_27 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2240)).objectCompare (GALGAS_string ("capitalized"))) ;
                        if (kBoolTrue != test_27.boolEnum ()) {
                          test_27 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2241)))) ;
                        }
                        const enumGalgasBool test_28 = test_27.boolEnum () ;
                        if (kBoolTrue == test_28) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242)) ;
                          }
                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2244)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2244)), object->mAttribute_value.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("gtl_data_types.galgas", 2244))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2243)) ;
                        }else if (kBoolFalse == test_28) {
                          const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2246)).objectCompare (GALGAS_string ("uppercaseString"))).boolEnum () ;
                          if (kBoolTrue == test_29) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
                            }
                            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2249)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2249)), object->mAttribute_value.getter_uppercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2249))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2248)) ;
                          }else if (kBoolFalse == test_29) {
                            const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2251)).objectCompare (GALGAS_string ("unsigned"))).boolEnum () ;
                            if (kBoolTrue == test_30) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2252)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2252)) ;
                              }
                              result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2254)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)), object->mAttribute_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2254))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2253)) ;
                            }else if (kBoolFalse == test_30) {
                              const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2256)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                              if (kBoolTrue == test_31) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2257)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2257)) ;
                                }
                                GALGAS_gtlString temp_32 ;
                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).isValid ()) {
                                  if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr ())) {
                                    temp_32 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr () ;
                                  }else{
                                    inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)) ;
                                  }
                                }
                                GALGAS_string var_subString_70451 = temp_32.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2258)) ;
                                GALGAS_uint var_subStringLength_70528 = var_subString_70451.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2259)) ;
                                GALGAS_uint var_start_70565 = GALGAS_uint ((uint32_t) 0U) ;
                                GALGAS_uint var_stop_70584 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2261)).substract_operation (var_subStringLength_70528, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2261)) ;
                                GALGAS_bool var_exists_70636 = GALGAS_bool (false) ;
                                if (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2263)).isValid ()) {
                                  uint32_t variant_70654 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2263)).uintValue () ;
                                  bool loop_70654 = true ;
                                  while (loop_70654) {
                                    GALGAS_bool test_33 = var_exists_70636.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2264)) ;
                                    if (kBoolTrue == test_33.boolEnum ()) {
                                      test_33 = GALGAS_bool (kIsInfOrEqual, var_start_70565.objectCompare (var_stop_70584)) ;
                                    }
                                    loop_70654 = test_33.isValid () ;
                                    if (loop_70654) {
                                      loop_70654 = test_33.boolValue () ;
                                    }
                                    if (loop_70654 && (0 == variant_70654)) {
                                      loop_70654 = false ;
                                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2263)) ;
                                    }
                                    if (loop_70654) {
                                      variant_70654 -- ;
                                      const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_subString (var_start_70565, var_subStringLength_70528 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2265)).objectCompare (var_subString_70451)).boolEnum () ;
                                      if (kBoolTrue == test_34) {
                                        var_exists_70636 = GALGAS_bool (true) ;
                                      }
                                      var_start_70565.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2268)) ;
                                    }
                                  }
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2271)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2271)), var_exists_70636  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2270)) ;
                              }else if (kBoolFalse == test_31) {
                                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2273)).objectCompare (GALGAS_string ("leftSubString"))).boolEnum () ;
                                if (kBoolTrue == test_35) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)) ;
                                  }
                                  GALGAS_gtlInt temp_36 ;
                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).isValid ()) {
                                    if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr ())) {
                                      temp_36 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr () ;
                                    }else{
                                      inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                                    }
                                  }
                                  GALGAS_uint var_index_71062 = temp_36.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2275)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2277)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2277)), object->mAttribute_value.getter_leftSubString (var_index_71062 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2277))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2276)) ;
                                }else if (kBoolFalse == test_35) {
                                  const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2279)).objectCompare (GALGAS_string ("rightSubString"))).boolEnum () ;
                                  if (kBoolTrue == test_37) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)) ;
                                    }
                                    GALGAS_gtlInt temp_38 ;
                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).isValid ()) {
                                      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr ())) {
                                        temp_38 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr () ;
                                      }else{
                                        inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                                      }
                                    }
                                    GALGAS_uint var_index_71355 = temp_38.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2281)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2283)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2283)), object->mAttribute_value.getter_rightSubString (var_index_71355 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2283))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2282)) ;
                                  }else if (kBoolFalse == test_37) {
                                    const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2285)).objectCompare (GALGAS_string ("subString"))).boolEnum () ;
                                    if (kBoolTrue == test_39) {
                                      {
                                      routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)) ;
                                      }
                                      GALGAS_gtlInt temp_40 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr ())) {
                                          temp_40 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)) ;
                                        }
                                      }
                                      GALGAS_uint var_start_71648 = temp_40.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2287)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)) ;
                                      GALGAS_gtlInt temp_41 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr ())) {
                                          temp_41 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)) ;
                                        }
                                      }
                                      GALGAS_uint var_length_71720 = temp_41.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2288)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)) ;
                                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2290)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)), object->mAttribute_value.getter_subString (var_start_71648, var_length_71720 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2289)) ;
                                    }else if (kBoolFalse == test_39) {
                                      const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2292)).objectCompare (GALGAS_string ("reversedString"))).boolEnum () ;
                                      if (kBoolTrue == test_42) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2293)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2293)) ;
                                        }
                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2295)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2295)), object->mAttribute_value.getter_reversedString (SOURCE_FILE ("gtl_data_types.galgas", 2295))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2294)) ;
                                      }else if (kBoolFalse == test_42) {
                                        const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2297)).objectCompare (GALGAS_string ("componentsSeparatedByString"))).boolEnum () ;
                                        if (kBoolTrue == test_43) {
                                          {
                                          routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2298)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2298)) ;
                                          }
                                          GALGAS_gtlString temp_44 ;
                                          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).isValid ()) {
                                            if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr ())) {
                                              temp_44 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr () ;
                                            }else{
                                              inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                            }
                                          }
                                          GALGAS_string var_separator_72254 = temp_44.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                          GALGAS_stringlist var_stringlist_72332 = object->mAttribute_value.getter_componentsSeparatedByString (var_separator_72254 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2300)) ;
                                          GALGAS_list var_components_72402 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2301)) ;
                                          cEnumerator_stringlist enumerator_72443 (var_stringlist_72332, kEnumeration_up) ;
                                          while (enumerator_72443.hasCurrentObject ()) {
                                            var_components_72402.addAssign_operation (GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2304)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2304)), enumerator_72443.current_mValue (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303)) ;
                                            enumerator_72443.gotoNextObject () ;
                                          }
                                          result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2308)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2308)), var_components_72402  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2307)) ;
                                        }else if (kBoolFalse == test_43) {
                                          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2310)).objectCompare (GALGAS_string ("interpretEscape"))).boolEnum () ;
                                          if (kBoolTrue == test_45) {
                                            TC_Array <C_FixItDescription> fixItArray46 ;
                                            inCompiler->emitSemanticWarning (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2311)), GALGAS_string ("deprecated method"), fixItArray46  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2311)) ;
                                            const GALGAS_gtlString temp_47 = object ;
                                            result_result = temp_47 ;
                                          }else if (kBoolFalse == test_45) {
                                            const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2313)).objectCompare (GALGAS_string ("columnPrefixedBy"))).boolEnum () ;
                                            if (kBoolTrue == test_48) {
                                              {
                                              routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)) ;
                                              }
                                              GALGAS_gtlString temp_49 ;
                                              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).isValid ()) {
                                                if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr ())) {
                                                  temp_49 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr () ;
                                                }else{
                                                  inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)) ;
                                                }
                                              }
                                              GALGAS_string var_prefix_72895 = temp_49.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2315)) ;
                                              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2317)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2318)), var_prefix_72895.add_operation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\n").add_operation (var_prefix_72895, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2316)) ;
                                            }else if (kBoolFalse == test_48) {
                                              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2321)).objectCompare (GALGAS_string ("wrap"))).boolEnum () ;
                                              if (kBoolTrue == test_50) {
                                                {
                                                routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2322)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2322)) ;
                                                }
                                                GALGAS_gtlInt temp_51 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr ())) {
                                                    temp_51 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)) ;
                                                  }
                                                }
                                                GALGAS_uint var_width_73232 = temp_51.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2323)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)) ;
                                                GALGAS_gtlInt temp_52 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr ())) {
                                                    temp_52 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)) ;
                                                  }
                                                }
                                                GALGAS_uint var_shift_73303 = temp_52.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2324)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)) ;
                                                GALGAS_string var_stringShift_73382 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_shift_73303  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)) ;
                                                GALGAS_stringlist var_paragraphs_73459 = object->mAttribute_value.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                                GALGAS_stringlist var_resultParagraphs_73540 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2327)) ;
                                                cEnumerator_stringlist enumerator_73589 (var_paragraphs_73459, kEnumeration_up) ;
                                                while (enumerator_73589.hasCurrentObject ()) {
                                                  GALGAS_stringlist var_words_73616 = enumerator_73589.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string (" ") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2329)) ;
                                                  GALGAS_uint var_lineWidth_73685 = GALGAS_uint ((uint32_t) 0U) ;
                                                  GALGAS_string var_line_73708 = GALGAS_string::makeEmptyString () ;
                                                  cEnumerator_stringlist enumerator_73739 (var_words_73616, kEnumeration_up) ;
                                                  while (enumerator_73739.hasCurrentObject ()) {
                                                    const enumGalgasBool test_53 = GALGAS_bool (kIsNotEqual, enumerator_73739.current_mValue (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                                    if (kBoolTrue == test_53) {
                                                      const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, var_lineWidth_73685.add_operation (enumerator_73739.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2334)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2334)).objectCompare (var_width_73232)).boolEnum () ;
                                                      if (kBoolTrue == test_54) {
                                                        var_line_73708.plusAssign_operation(GALGAS_string ("\n").add_operation (var_stringShift_73382, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2335)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2335)) ;
                                                        var_lineWidth_73685 = var_shift_73303 ;
                                                      }
                                                      var_lineWidth_73685.plusAssign_operation(enumerator_73739.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2338)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)) ;
                                                      var_line_73708.plusAssign_operation(enumerator_73739.current_mValue (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2339)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2339)) ;
                                                    }
                                                    enumerator_73739.gotoNextObject () ;
                                                  }
                                                  var_resultParagraphs_73540.addAssign_operation (var_line_73708  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2342)) ;
                                                  enumerator_73589.gotoNextObject () ;
                                                }
                                                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2345)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2346)), GALGAS_string::constructor_componentsJoinedByString (var_resultParagraphs_73540, GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2347))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2344)) ;
                                              }else if (kBoolFalse == test_50) {
                                                const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2349)).objectCompare (GALGAS_string ("replaceString"))).boolEnum () ;
                                                if (kBoolTrue == test_55) {
                                                  {
                                                  routine_argumentsCheck (constinArgument_methodName, function_stringStringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2350)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2350)) ;
                                                  }
                                                  GALGAS_gtlString temp_56 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr ())) {
                                                      temp_56 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)) ;
                                                    }
                                                  }
                                                  GALGAS_string var_find_74336 = temp_56.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2351)) ;
                                                  GALGAS_gtlString temp_57 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr ())) {
                                                      temp_57 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)) ;
                                                    }
                                                  }
                                                  GALGAS_string var_rep_74403 = temp_57.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2352)) ;
                                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2354)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2355)), object->mAttribute_value.getter_stringByReplacingStringByString (var_find_74336, var_rep_74403, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2356))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)) ;
                                                }else if (kBoolFalse == test_55) {
                                                  const enumGalgasBool test_58 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2358)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                                                  if (kBoolTrue == test_58) {
                                                    {
                                                    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2359)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2359)) ;
                                                    }
                                                    GALGAS_gtlString temp_59 ;
                                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).isValid ()) {
                                                      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr ())) {
                                                        temp_59 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr () ;
                                                      }else{
                                                        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)) ;
                                                      }
                                                    }
                                                    GALGAS_string var_subString_74738 = callExtensionGetter_string ((const cPtr_gtlString *) temp_59.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)) ;
                                                    GALGAS_uint var_subLength_74810 = var_subString_74738.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2361)) ;
                                                    GALGAS_uint var_start_74847 = GALGAS_uint ((uint32_t) 0U) ;
                                                    GALGAS_uint var_stop_74866 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2363)).substract_operation (var_subLength_74810, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2363)) ;
                                                    GALGAS_bool var_exists_74912 = GALGAS_bool (false) ;
                                                    if (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2365)).isValid ()) {
                                                      uint32_t variant_74929 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2365)).uintValue () ;
                                                      bool loop_74929 = true ;
                                                      while (loop_74929) {
                                                        loop_74929 = GALGAS_bool (kIsInfOrEqual, var_start_74847.objectCompare (var_stop_74866)).operator_and (var_exists_74912.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2366)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2366)).isValid () ;
                                                        if (loop_74929) {
                                                          loop_74929 = GALGAS_bool (kIsInfOrEqual, var_start_74847.objectCompare (var_stop_74866)).operator_and (var_exists_74912.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2366)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2366)).boolValue () ;
                                                        }
                                                        if (loop_74929 && (0 == variant_74929)) {
                                                          loop_74929 = false ;
                                                          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2365)) ;
                                                        }
                                                        if (loop_74929) {
                                                          variant_74929 -- ;
                                                          const enumGalgasBool test_60 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_subString (var_start_74847, var_subLength_74810 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2367)).objectCompare (var_subString_74738)).boolEnum () ;
                                                          if (kBoolTrue == test_60) {
                                                            var_exists_74912 = GALGAS_bool (true) ;
                                                          }
                                                          var_start_74847.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2370)) ;
                                                        }
                                                      }
                                                    }
                                                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2373)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2374)), var_exists_74912  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2372)) ;
                                                  }else if (kBoolFalse == test_58) {
                                                    const enumGalgasBool test_61 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2377)).objectCompare (GALGAS_string ("envVarExists"))).boolEnum () ;
                                                    if (kBoolTrue == test_61) {
                                                      {
                                                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2378)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2378)) ;
                                                      }
                                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2380)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2381)), object->mAttribute_value.getter_doesEnvironmentVariableExist (SOURCE_FILE ("gtl_data_types.galgas", 2382))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2379)) ;
                                                    }else if (kBoolFalse == test_61) {
                                                      const enumGalgasBool test_62 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2384)).objectCompare (GALGAS_string ("envVar"))).boolEnum () ;
                                                      if (kBoolTrue == test_62) {
                                                        {
                                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385)) ;
                                                        }
                                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2387)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2388)), GALGAS_string::constructor_stringWithEnvironmentVariableOrEmpty (object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2386)) ;
                                                      }else if (kBoolFalse == test_62) {
                                                        const enumGalgasBool test_63 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2391)))).boolEnum () ;
                                                        if (kBoolTrue == test_63) {
                                                          {
                                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2392)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2392)) ;
                                                          }
                                                          const GALGAS_gtlString temp_64 = object ;
                                                          result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2394)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2394)), temp_64.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2394))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2393)) ;
                                                        }else if (kBoolFalse == test_63) {
                                                          const enumGalgasBool test_65 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2396)))).boolEnum () ;
                                                          if (kBoolTrue == test_65) {
                                                            {
                                                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)) ;
                                                            }
                                                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2399)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2399)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)) ;
                                                          }else if (kBoolFalse == test_65) {
                                                            const enumGalgasBool test_66 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2401)))).boolEnum () ;
                                                            if (kBoolTrue == test_66) {
                                                              {
                                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2402)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2402)) ;
                                                              }
                                                              result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2404)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2404))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2403)) ;
                                                            }else if (kBoolFalse == test_66) {
                                                              const enumGalgasBool test_67 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2406)).boolEnum () ;
                                                              if (kBoolTrue == test_67) {
                                                                const GALGAS_gtlString temp_68 = object ;
                                                                result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2407)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2408)), constinArgument_lib, temp_68, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2407)) ;
                                                              }else if (kBoolFalse == test_67) {
                                                                TC_Array <C_FixItDescription> fixItArray69 ;
                                                                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2414)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2414)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)), fixItArray69  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)) ;
                                                                result_result.drop () ; // Release error dropped variable
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionGetter_gtlString_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_performGetter (defineExtensionGetter_gtlString_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlString performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlString_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlString * object = (cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2427)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2428)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2428)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2429)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2429)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2429)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2429)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2429)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_77012 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_77012.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2431)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2432)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2433)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2433)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2434)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("setCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2435)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_charIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2436)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2436)) ;
        }
        GALGAS_gtlChar temp_4 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)).ptr ())) {
            temp_4 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)).ptr () ;
          }else{
            inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)) ;
          }
        }
        GALGAS_char var_charToSet_77368 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2437)) ;
        GALGAS_gtlInt temp_5 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)).ptr ())) {
            temp_5 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)).ptr () ;
          }else{
            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)) ;
          }
        }
        GALGAS_uint var_index_77433 = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2438)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2438)) ;
        {
        object->mAttribute_value.setter_setCharacterAtIndex (var_charToSet_77368, var_index_77433, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2439)) ;
        }
        object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2440)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_6 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2441)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_gtlString temp_7 = object ;
          GALGAS_gtlData var_copy_77635 = temp_7 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2443)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2444)), constinArgument_lib, var_copy_77635, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2443)) ;
          GALGAS_gtlString temp_8 ;
          if (var_copy_77635.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlString *> (var_copy_77635.ptr ())) {
              temp_8 = (cPtr_gtlString *) var_copy_77635.ptr () ;
            }else{
              inCompiler->castError ("gtlString", var_copy_77635.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2449)) ;
            }
          }
          object->mAttribute_value = temp_8.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2449)) ;
          object->mAttribute_where = var_copy_77635.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2450)) ;
          object->mAttribute_meta = var_copy_77635.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2451)) ;
        }else if (kBoolFalse == test_6) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2453)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2453)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)), fixItArray9  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlString_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionSetter_gtlString_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlString_performSetter (defineExtensionSetter_gtlString_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlBool_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint & constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2466)).add_operation (GALGAS_string ("boolean: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2466)).add_operation (object->mAttribute_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2467)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2467)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2467)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_desc (defineExtensionGetter_gtlBool_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlBool_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = object->mAttribute_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2470)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_string (defineExtensionGetter_gtlBool_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlBool lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlBool_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2473)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2473)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_lstring (defineExtensionGetter_gtlBool_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlBool_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_bool (defineExtensionGetter_gtlBool_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlBool_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_value.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2481)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2481)) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                            extensionGetter_gtlBool_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_int (defineExtensionGetter_gtlBool_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlBool_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  GALGAS_double temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_value.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_double (1) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_double (0) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_float (defineExtensionGetter_gtlBool_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_plusOp (defineExtensionGetter_gtlBool_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlBool minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2493)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_minusOp (defineExtensionGetter_gtlBool_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2497)), object->mAttribute_value.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2497))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2497)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_notOp (defineExtensionGetter_gtlBool_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2501)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_addOp (defineExtensionGetter_gtlBool_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_subOp (defineExtensionGetter_gtlBool_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2509)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_mulOp (defineExtensionGetter_gtlBool_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2513)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_divOp (defineExtensionGetter_gtlBool_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2517)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_modOp (defineExtensionGetter_gtlBool_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2525)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2524)), object->mAttribute_value.operator_and (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2525)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2525))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2522)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2528)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2528)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_andOp (defineExtensionGetter_gtlBool_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2537)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2536)), object->mAttribute_value.operator_or (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2537)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2537))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2534)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2540)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2540)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_orOp (defineExtensionGetter_gtlBool_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2549)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2548)), object->mAttribute_value.operator_xor (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2549)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2549))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2546)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2552)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2552)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_xorOp (defineExtensionGetter_gtlBool_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2557)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_slOp (defineExtensionGetter_gtlBool_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2561)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_srOp (defineExtensionGetter_gtlBool_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2569)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2568)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2569))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2566)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2572)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2572)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_neqOp (defineExtensionGetter_gtlBool_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2581)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2580)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2581))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2578)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2584)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2584)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_eqOp (defineExtensionGetter_gtlBool_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2593)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2592)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2593))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2590)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2596)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2596)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_gtOp (defineExtensionGetter_gtlBool_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2605)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2604)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2605))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2602)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2608)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2608)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_geOp (defineExtensionGetter_gtlBool_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2617)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2616)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2617))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2614)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2620)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2620)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_ltOp (defineExtensionGetter_gtlBool_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2629)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2628)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2629))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2626)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2632)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2632)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_leOp (defineExtensionGetter_gtlBool_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlBool embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlBool_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_bool) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                     extensionGetter_gtlBool_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_embeddedType (defineExtensionGetter_gtlBool_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlBool addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlBool_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2643))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2643)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlBool_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                   extensionMethod_gtlBool_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlBool_addMyValue (defineExtensionMethod_gtlBool_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlBool performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_methodName,
                                                             const GALGAS_gtlDataList & constinArgument_arguments,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2655)).objectCompare (GALGAS_string ("trueOrFalse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2656)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2656)) ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_value.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("true") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("false") ;
    }
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2658)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2659)), temp_1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2657)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2662)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2663)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2663)) ;
      }
      const GALGAS_gtlBool temp_4 = object ;
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2665)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2666)), callExtensionGetter_string ((const cPtr_gtlBool *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2667))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2664)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2669)).objectCompare (GALGAS_string ("yesOrNo"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2670)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2670)) ;
        }
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = object->mAttribute_value.boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string ("yes") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string ("no") ;
        }
        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2672)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2673)), temp_6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2671)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2676)).objectCompare (GALGAS_string ("TRUEOrFALSE"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2677)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2677)) ;
          }
          GALGAS_string temp_9 ;
          const enumGalgasBool test_10 = object->mAttribute_value.boolEnum () ;
          if (kBoolTrue == test_10) {
            temp_9 = GALGAS_string ("TRUE") ;
          }else if (kBoolFalse == test_10) {
            temp_9 = GALGAS_string ("FALSE") ;
          }
          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2679)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2680)), temp_9  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2678)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2683)).objectCompare (GALGAS_string ("YESOrNO"))).boolEnum () ;
          if (kBoolTrue == test_11) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2684)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2684)) ;
            }
            GALGAS_string temp_12 ;
            const enumGalgasBool test_13 = object->mAttribute_value.boolEnum () ;
            if (kBoolTrue == test_13) {
              temp_12 = GALGAS_string ("YES") ;
            }else if (kBoolFalse == test_13) {
              temp_12 = GALGAS_string ("NO") ;
            }
            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2686)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2687)), temp_12  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2685)) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_bool test_14 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2690)).objectCompare (GALGAS_string ("int"))) ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2690)).objectCompare (GALGAS_string ("unsigned"))) ;
            }
            const enumGalgasBool test_15 = test_14.boolEnum () ;
            if (kBoolTrue == test_15) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2691)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2691)) ;
              }
              GALGAS_bigint temp_16 ;
              const enumGalgasBool test_17 = object->mAttribute_value.boolEnum () ;
              if (kBoolTrue == test_17) {
                temp_16 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2695)) ;
              }else if (kBoolFalse == test_17) {
                temp_16 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2695)) ;
              }
              result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2693)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2694)), temp_16  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2692)) ;
            }else if (kBoolFalse == test_15) {
              const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2697)))).boolEnum () ;
              if (kBoolTrue == test_18) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2698)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2698)) ;
                }
                const GALGAS_gtlBool temp_19 = object ;
                result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2700)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2700)), temp_19.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2700))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2699)) ;
              }else if (kBoolFalse == test_18) {
                const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2702)))).boolEnum () ;
                if (kBoolTrue == test_20) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2703)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2703)) ;
                  }
                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2705)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2705)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2704)) ;
                }else if (kBoolFalse == test_20) {
                  const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2707)))).boolEnum () ;
                  if (kBoolTrue == test_21) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2708)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2708)) ;
                    }
                    result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2710)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2710)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2710))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2709)) ;
                  }else if (kBoolFalse == test_21) {
                    const enumGalgasBool test_22 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2712)).boolEnum () ;
                    if (kBoolTrue == test_22) {
                      const GALGAS_gtlBool temp_23 = object ;
                      result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2713)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2714)), constinArgument_lib, temp_23, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2713)) ;
                    }else if (kBoolFalse == test_22) {
                      TC_Array <C_FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2720)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2720)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2720)).add_operation (GALGAS_string ("' for boolean target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2720)), fixItArray24  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2720)) ;
                      result_result.drop () ; // Release error dropped variable
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionGetter_gtlBool_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_performGetter (defineExtensionGetter_gtlBool_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlBool performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlBool_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlBool * object = (cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2733)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2734)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2734)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2735)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2735)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2735)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2735)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2735)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_85786 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_85786.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2736)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2736)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2737)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2738)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2739)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2739)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2740)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2741)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlBool temp_4 = object ;
        GALGAS_gtlData var_copy_86082 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2743)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2744)), constinArgument_lib, var_copy_86082, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2743)) ;
        GALGAS_gtlBool temp_5 ;
        if (var_copy_86082.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_copy_86082.ptr ())) {
            temp_5 = (cPtr_gtlBool *) var_copy_86082.ptr () ;
          }else{
            inCompiler->castError ("gtlBool", var_copy_86082.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2749)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2749)) ;
        object->mAttribute_where = var_copy_86082.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2750)) ;
        object->mAttribute_meta = var_copy_86082.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2751)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2753)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2753)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2753)).add_operation (GALGAS_string ("' for boolean target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2753)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2753)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlBool_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionSetter_gtlBool_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlBool_performSetter (defineExtensionSetter_gtlBool_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlSet_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint & constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2771)).add_operation (GALGAS_string ("set: @!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2771)) ;
  cEnumerator_stringset enumerator_87047 (object->mAttribute_value, kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_87047.hasCurrentObject () && bool_0) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2775))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2775)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2775)) ;
    while (enumerator_87047.hasCurrentObject () && bool_0) {
      result_result.plusAssign_operation(enumerator_87047.current_key (HERE), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2777)) ;
      enumerator_87047.gotoNextObject () ;
      if (enumerator_87047.hasCurrentObject () && bool_0) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2779)) ;
      }
    }
    result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2781)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2783)).add_operation (GALGAS_string ("!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2783)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2783)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_desc (defineExtensionGetter_gtlSet_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlSet_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a set to a string"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2787)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_string (defineExtensionGetter_gtlSet_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlSet_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a set to a lstring"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2791)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_lstring (defineExtensionGetter_gtlSet_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlSet_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a set to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2795)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_bool (defineExtensionGetter_gtlSet_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlSet int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlSet_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a set to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2799)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                            extensionGetter_gtlSet_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_int (defineExtensionGetter_gtlSet_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlSet_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a set to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2803)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_float (defineExtensionGetter_gtlSet_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2807)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_plusOp (defineExtensionGetter_gtlSet_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2811)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_minusOp (defineExtensionGetter_gtlSet_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2815)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_notOp (defineExtensionGetter_gtlSet_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  GALGAS_stringset var_set_88210 = object->mAttribute_value ;
  var_set_88210.addAssign_operation (callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2820))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2820)) ;
  result_result = GALGAS_gtlSet::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2821)), var_set_88210  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2821)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_addOp (defineExtensionGetter_gtlSet_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2827)) ;
      }
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2827)), object->mAttribute_value.substract_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2827)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2827))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2826)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2830)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2830)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_subOp (defineExtensionGetter_gtlSet_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2835)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_mulOp (defineExtensionGetter_gtlSet_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2839)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_divOp (defineExtensionGetter_gtlSet_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2843)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_modOp (defineExtensionGetter_gtlSet_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2849)) ;
      }
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2849)), object->mAttribute_value.operator_and (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2849)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2849))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2848)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2852)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2852)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_andOp (defineExtensionGetter_gtlSet_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2859)) ;
      }
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2859)), object->mAttribute_value.operator_or (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2859)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2859))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2858)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2862)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2862)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_orOp (defineExtensionGetter_gtlSet_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2867)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_xorOp (defineExtensionGetter_gtlSet_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2871)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_slOp (defineExtensionGetter_gtlSet_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2875)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_srOp (defineExtensionGetter_gtlSet_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2881)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2881)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2881))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2880)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2884)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2884)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_neqOp (defineExtensionGetter_gtlSet_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2891)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2891)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2891))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2890)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2894)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2894)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_eqOp (defineExtensionGetter_gtlSet_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2901)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2901)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2901))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2900)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2904)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2904)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_gtOp (defineExtensionGetter_gtlSet_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2911)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2911)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2911))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2910)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2914)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2914)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_geOp (defineExtensionGetter_gtlSet_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2921)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2921)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2921))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2920)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2924)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2924)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_ltOp (defineExtensionGetter_gtlSet_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2931)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2931)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2931))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2930)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2934)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2934)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_leOp (defineExtensionGetter_gtlSet_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlSet embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlSet_embeddedType (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2940)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                     extensionGetter_gtlSet_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_embeddedType (defineExtensionGetter_gtlSet_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlSet addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSet_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2945))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2945)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSet_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                   extensionMethod_gtlSet_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSet_addMyValue (defineExtensionMethod_gtlSet_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlSet performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring & constinArgument_methodName,
                                                            const GALGAS_gtlDataList & constinArgument_arguments,
                                                            const GALGAS_library & constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2957)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2958)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2958)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2960)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2961)), object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 2962)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2962))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2959)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2964)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2965)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2965)) ;
      }
      result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2967)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2967)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2967))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2966)) ;
      cEnumerator_stringset enumerator_92347 (object->mAttribute_value, kEnumeration_up) ;
      while (enumerator_92347.hasCurrentObject ()) {
        {
        result_result.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_92366 = (cPtr_gtlData *) result_result.ptr () ;
        callExtensionSetter_appendItem ((cPtr_gtlData *) ptr_92366, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2970)), enumerator_92347.current_key (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2970)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2970)) ;
        }
        enumerator_92347.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("contains").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2972)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2973)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2973)) ;
        }
        GALGAS_string var_key_92560 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2974)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2974)) ;
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2976)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2976)), object->mAttribute_value.getter_hasKey (var_key_92560 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2976))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2975)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2978)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2979)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2979)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2981)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2981)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2980)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2983)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2984)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2984)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2986)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2986)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2986))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2985)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2988)).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_gtlSet temp_6 = object ;
              result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2989)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2990)), constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2989)) ;
            }else if (kBoolFalse == test_5) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2996)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2996)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2996)).add_operation (GALGAS_string ("' for set target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2996)), fixItArray7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2996)) ;
              result_result.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionGetter_gtlSet_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_performGetter (defineExtensionGetter_gtlSet_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlSet performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlSet_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlSet * object = (cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3009)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3010)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3010)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3011)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3011)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3011)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3011)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3011)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_93795 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_93795.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3012)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3012)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3013)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3014)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3015)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3015)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3016)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("add").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3017)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3018)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3018)) ;
        }
        GALGAS_string var_key_94136 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)) ;
        object->mAttribute_value.addAssign_operation (var_key_94136  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3020)) ;
        object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3021)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("remove").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3022)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3023)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3023)) ;
          }
          GALGAS_string var_key_94330 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3024)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3024)) ;
          {
          object->mAttribute_value.setter_removeKey (var_key_94330 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3025)) ;
          }
          object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3026)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3027)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_gtlSet temp_6 = object ;
            GALGAS_gtlData var_copy_94489 = temp_6 ;
            callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3029)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3030)), constinArgument_lib, var_copy_94489, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3029)) ;
            GALGAS_gtlSet temp_7 ;
            if (var_copy_94489.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlSet *> (var_copy_94489.ptr ())) {
                temp_7 = (cPtr_gtlSet *) var_copy_94489.ptr () ;
              }else{
                inCompiler->castError ("gtlSet", var_copy_94489.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3035)) ;
              }
            }
            object->mAttribute_value = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3035)) ;
            object->mAttribute_where = var_copy_94489.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3036)) ;
            object->mAttribute_meta = var_copy_94489.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3037)) ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3039)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3039)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3039)).add_operation (GALGAS_string ("' for set target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3039)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3039)) ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlSet_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionSetter_gtlSet_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlSet_performSetter (defineExtensionSetter_gtlSet_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct desc'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlStruct_desc (const cPtr_gtlData * inObject,
                                                     const GALGAS_uint & constinArgument_tab,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3052)).add_operation (GALGAS_string ("struct: @{\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3052)) ;
  cEnumerator_gtlVarMap enumerator_95230 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_95230.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3055))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3055)).add_operation (enumerator_95230.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3056)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3055)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3056)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_95230.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3057)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3057)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3056)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3055)) ;
    enumerator_95230.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_desc (defineExtensionGetter_gtlStruct_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct string'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlStruct_string (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3063)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_string (defineExtensionGetter_gtlStruct_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlStruct lstring'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlStruct_lstring (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3067)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_lstring (defineExtensionGetter_gtlStruct_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct bool'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlStruct_bool (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a struct to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_bool (defineExtensionGetter_gtlStruct_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct int'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlStruct_int (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a struct to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3075)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                            extensionGetter_gtlStruct_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_int (defineExtensionGetter_gtlStruct_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct float'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlStruct_float (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a struct to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3079)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_float (defineExtensionGetter_gtlStruct_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct plusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_plusOp (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3083)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_plusOp (defineExtensionGetter_gtlStruct_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlStruct minusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_minusOp (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3087)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_minusOp (defineExtensionGetter_gtlStruct_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct notOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_notOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3091)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_notOp (defineExtensionGetter_gtlStruct_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct addOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_addOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3095)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_addOp (defineExtensionGetter_gtlStruct_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct subOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_subOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3099)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_subOp (defineExtensionGetter_gtlStruct_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct mulOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_mulOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3103)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_mulOp (defineExtensionGetter_gtlStruct_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct divOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_divOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3107)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_divOp (defineExtensionGetter_gtlStruct_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct modOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_modOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3111)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_modOp (defineExtensionGetter_gtlStruct_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct andOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_andOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3115)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_andOp (defineExtensionGetter_gtlStruct_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct orOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_orOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3119)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_orOp (defineExtensionGetter_gtlStruct_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct xorOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_xorOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3123)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_xorOp (defineExtensionGetter_gtlStruct_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct slOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_slOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3127)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_slOp (defineExtensionGetter_gtlStruct_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct srOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_srOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3131)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_srOp (defineExtensionGetter_gtlStruct_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct neqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_neqOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData & constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlStruct temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3136)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_97702 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3136)) ;
    GALGAS_bool var_equal_97748 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3138)).objectCompare (var_rValue_97702.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3138)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_97748 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_97748 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_97873 (object->mAttribute_value, kEnumeration_up) ;
      while (enumerator_97873.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_97702.getter_hasKey (enumerator_97873.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3143)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3143)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_97958 ;
          var_rValue_97702.method_get (enumerator_97873.current_lkey (HERE), var_rData_97958, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3144)) ;
          var_equal_97748 = var_equal_97748.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_97873.current_value (HERE).ptr (), var_rData_97958, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3145)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3145)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3145)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_97748 = GALGAS_bool (false) ;
        }
        enumerator_97873.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3151)), var_equal_97748.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3151))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3151)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3153)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3153)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_neqOp (defineExtensionGetter_gtlStruct_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct eqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_eqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlStruct temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3159)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_98334 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3159)) ;
    GALGAS_bool var_equal_98380 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3161)).objectCompare (var_rValue_98334.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3161)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_98380 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_98380 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_98505 (object->mAttribute_value, kEnumeration_up) ;
      while (enumerator_98505.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_98334.getter_hasKey (enumerator_98505.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3166)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3166)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_98590 ;
          var_rValue_98334.method_get (enumerator_98505.current_lkey (HERE), var_rData_98590, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3167)) ;
          var_equal_98380 = var_equal_98380.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_98505.current_value (HERE).ptr (), var_rData_98590, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_98380 = GALGAS_bool (false) ;
        }
        enumerator_98505.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3174)), var_equal_98380  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3174)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3176)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3176)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_eqOp (defineExtensionGetter_gtlStruct_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct gtOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_gtOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3181)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_gtOp (defineExtensionGetter_gtlStruct_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct geOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_geOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3184)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_geOp (defineExtensionGetter_gtlStruct_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct ltOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_ltOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3187)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_ltOp (defineExtensionGetter_gtlStruct_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct leOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_leOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3190)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_leOp (defineExtensionGetter_gtlStruct_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct embeddedType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlStruct_embeddedType (const cPtr_gtlData * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3195)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                     extensionGetter_gtlStruct_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_embeddedType (defineExtensionGetter_gtlStruct_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlStruct addMyValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlStruct_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3200))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3200)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlStruct_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                   extensionMethod_gtlStruct_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlStruct_addMyValue (defineExtensionMethod_gtlStruct_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_performGetter (const cPtr_gtlData * inObject,
                                                               const GALGAS_lstring & constinArgument_methodName,
                                                               const GALGAS_gtlDataList & constinArgument_arguments,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("map").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3212)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3213)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3213)) ;
    }
    result_result = GALGAS_gtlMap::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3215)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3216)), object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3214)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3219)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3220)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3220)) ;
      }
      const GALGAS_gtlStruct temp_2 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3222)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3222)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3222))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3221)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3224)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3225)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3225)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3227)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3227)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3226)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3229)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3230)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3230)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3232)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3232)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3232))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3231)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3234)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_gtlStruct temp_6 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3235)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3236)), constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3235)) ;
          }else if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3242)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3242)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3242)).add_operation (GALGAS_string ("' for struct target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3242)), fixItArray7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3242)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_performGetter (defineExtensionGetter_gtlStruct_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlStruct performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3255)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3256)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3256)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3257)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3257)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3257)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3257)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3257)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_101448 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_101448.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3258)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3258)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3259)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3260)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3262)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3263)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlStruct temp_4 = object ;
        GALGAS_gtlData var_copy_101746 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3265)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3266)), constinArgument_lib, var_copy_101746, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3265)) ;
        GALGAS_gtlStruct temp_5 ;
        if (var_copy_101746.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlStruct *> (var_copy_101746.ptr ())) {
            temp_5 = (cPtr_gtlStruct *) var_copy_101746.ptr () ;
          }else{
            inCompiler->castError ("gtlStruct", var_copy_101746.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3271)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3271)) ;
        object->mAttribute_where = var_copy_101746.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3272)) ;
        object->mAttribute_meta = var_copy_101746.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3273)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3275)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3275)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3275)).add_operation (GALGAS_string ("' for struct target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3275)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3275)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionSetter_gtlStruct_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_performSetter (defineExtensionSetter_gtlStruct_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@gtlStruct structField'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlStruct_structField (const cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   GALGAS_gtlData & outArgument_result,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3286)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3286)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3287)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3289)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3289))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3289)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlStruct_structField (void) {
  enterExtensionMethod_structField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionMethod_gtlStruct_structField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlStruct_structField (defineExtensionMethod_gtlStruct_structField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct resultField'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_resultField (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_name,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3297)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3297)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_value.method_get (constinArgument_name, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3298)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3300)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3300))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3300)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_resultField (void) {
  enterExtensionGetter_resultField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_resultField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_resultField (defineExtensionGetter_gtlStruct_resultField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct hasStructField'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlStruct_hasStructField (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_name,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3311)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3311)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_hasStructField (void) {
  enterExtensionGetter_hasStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionGetter_gtlStruct_hasStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_hasStructField (defineExtensionGetter_gtlStruct_hasStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlStruct setStructField'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_setStructField (cPtr_gtlData * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      const GALGAS_gtlData constinArgument_data,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  extensionSetter_replaceOrCreate (object->mAttribute_value, constinArgument_name, constinArgument_data, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3321)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionSetter_gtlStruct_setStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_setStructField (defineExtensionSetter_gtlStruct_setStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension setter '@gtlStruct setStructFieldAtLevel'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_name,
                                                             const GALGAS_gtlData constinArgument_data,
                                                             const GALGAS_uint constinArgument_level,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  extensionSetter_replaceOrCreateAtLevel (object->mAttribute_value, constinArgument_name, constinArgument_data, constinArgument_level, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3332)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                              extensionSetter_gtlStruct_setStructFieldAtLevel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_setStructFieldAtLevel (defineExtensionSetter_gtlStruct_setStructFieldAtLevel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension setter '@gtlStruct deleteStructField'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_deleteStructField (cPtr_gtlData * inObject,
                                                         const GALGAS_lstring constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  GALGAS_gtlData joker_103983 ; // Joker input parameter
  object->mAttribute_value.setter_del (constinArgument_name, joker_103983, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3341)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                          extensionSetter_gtlStruct_deleteStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_deleteStructField (defineExtensionSetter_gtlStruct_deleteStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlList_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint & constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3353)).add_operation (GALGAS_string ("list: @(\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3353)) ;
  cEnumerator_list enumerator_104397 (object->mAttribute_value, kEnumeration_up) ;
  GALGAS_uint index_104385 ((uint32_t) 0) ;
  while (enumerator_104397.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3356))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3356)).add_operation (index_104385.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3357)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3356)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3357)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_104397.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3358)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3358)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3357)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3356)) ;
    enumerator_104397.gotoNextObject () ;
    index_104385.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3355)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_desc (defineExtensionGetter_gtlList_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlList_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3364)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_string (defineExtensionGetter_gtlList_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlList lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlList_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3368)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_lstring (defineExtensionGetter_gtlList_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlList_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a list to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3372)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_bool (defineExtensionGetter_gtlList_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlList_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a list to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                            extensionGetter_gtlList_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_int (defineExtensionGetter_gtlList_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlList_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a list to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3380)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_float (defineExtensionGetter_gtlList_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3384)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_plusOp (defineExtensionGetter_gtlList_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlList minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3388)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_minusOp (defineExtensionGetter_gtlList_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3392)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_notOp (defineExtensionGetter_gtlList_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_list var_res_105516 = object->mAttribute_value ;
  var_res_105516.addAssign_operation (constinArgument_right  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3397)) ;
  result_result = GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3398)), var_res_105516  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3398)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_addOp (defineExtensionGetter_gtlList_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3402)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_subOp (defineExtensionGetter_gtlList_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3406)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_mulOp (defineExtensionGetter_gtlList_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3410)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_divOp (defineExtensionGetter_gtlList_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3414)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_modOp (defineExtensionGetter_gtlList_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3418)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_andOp (defineExtensionGetter_gtlList_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlList temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3426)) ;
      }
    }
    result_result = GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3425)), object->mAttribute_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3426)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3426))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3423)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3429)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3429)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_orOp (defineExtensionGetter_gtlList_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3434)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_xorOp (defineExtensionGetter_gtlList_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3438)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_slOp (defineExtensionGetter_gtlList_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3442)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_srOp (defineExtensionGetter_gtlList_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlList temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3447)) ;
      }
    }
    GALGAS_list var_rValue_106994 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3447)) ;
    GALGAS_bool var_equal_107038 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3449)).objectCompare (var_rValue_106994.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3449)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_107038 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_107038 = GALGAS_bool (true) ;
      cEnumerator_list enumerator_107158 (object->mAttribute_value, kEnumeration_up) ;
      cEnumerator_list enumerator_107177 (var_rValue_106994, kEnumeration_up) ;
      while (enumerator_107158.hasCurrentObject () && enumerator_107177.hasCurrentObject ()) {
        var_equal_107038 = var_equal_107038.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_107158.current_value (HERE).ptr (), enumerator_107177.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3454)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3454)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3454)) ;
        enumerator_107158.gotoNextObject () ;
        enumerator_107177.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3457)), var_equal_107038.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3457))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3457)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3459)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3459)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_neqOp (defineExtensionGetter_gtlList_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlList temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3465)) ;
      }
    }
    GALGAS_list var_rValue_107491 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3465)) ;
    GALGAS_bool var_equal_107535 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3467)).objectCompare (var_rValue_107491.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3467)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_107535 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_107535 = GALGAS_bool (true) ;
      cEnumerator_list enumerator_107655 (object->mAttribute_value, kEnumeration_up) ;
      cEnumerator_list enumerator_107674 (var_rValue_107491, kEnumeration_up) ;
      while (enumerator_107655.hasCurrentObject () && enumerator_107674.hasCurrentObject ()) {
        var_equal_107535 = var_equal_107535.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_107655.current_value (HERE).ptr (), enumerator_107674.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3472)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3472)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3472)) ;
        enumerator_107655.gotoNextObject () ;
        enumerator_107674.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3475)), var_equal_107535  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3475)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3477)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3477)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_eqOp (defineExtensionGetter_gtlList_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a list does not support the > operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3482)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_gtOp (defineExtensionGetter_gtlList_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a list does not support the >= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3486)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_geOp (defineExtensionGetter_gtlList_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a list does not support the < operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3490)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_ltOp (defineExtensionGetter_gtlList_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a list does not support the <= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3494)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_leOp (defineExtensionGetter_gtlList_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlList embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlList_embeddedType (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("list forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3499)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                     extensionGetter_gtlList_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_embeddedType (defineExtensionGetter_gtlList_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlList addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlList_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3504))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3504)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlList_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionMethod_gtlList_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlList_addMyValue (defineExtensionMethod_gtlList_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlList performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_methodName,
                                                             const GALGAS_gtlDataList & constinArgument_arguments,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3516)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3517)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3517)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3519)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3520)), object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3521)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3521))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3518)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("first").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3523)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3524)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3524)) ;
      }
      object->mAttribute_value.method_first (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3525)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("last").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3526)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3527)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3527)) ;
        }
        object->mAttribute_value.method_last (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3528)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("subListTo").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3529)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3530)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3530)) ;
          }
          GALGAS_uint var_index_109655 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3531)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3531)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3531)) ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_index_109655.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3532)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3534)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3535)), object->mAttribute_value.getter_subListToIndex (var_index_109655, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3536))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3533)) ;
          }else if (kBoolFalse == test_4) {
            const GALGAS_gtlList temp_5 = object ;
            result_result = temp_5 ;
          }
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("subListFrom").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3541)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3542)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3542)) ;
            }
            GALGAS_uint var_index_110009 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3543)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3543)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3543)) ;
            const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_index_110009.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3544)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3546)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3547)), object->mAttribute_value.getter_subListFromIndex (var_index_110009, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3548))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3545)) ;
            }else if (kBoolFalse == test_7) {
              result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3552)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3553)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3554))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3551)) ;
            }
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("subList").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3557)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3558)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3558)) ;
              }
              GALGAS_uint var_start_110451 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3559)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3559)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3559)) ;
              GALGAS_uint var_length_110504 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3560)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3560)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3560)) ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_start_110451.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3561)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_start_110451.add_operation (var_length_110504, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3562)).objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3562)))).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_length_110504 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3563)).substract_operation (var_start_110451, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3563)) ;
                }
                result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3566)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3567)), object->mAttribute_value.getter_subListWithRange (GALGAS_range::constructor_new (var_start_110451, var_length_110504  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3568)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3568))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3565)) ;
              }else if (kBoolFalse == test_9) {
                result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3572)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3573)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3574))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3571)) ;
              }
            }else if (kBoolFalse == test_8) {
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("mapBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3577)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3578)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3578)) ;
                }
                GALGAS_lstring var_key_111066 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3579)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3579)) ;
                GALGAS_gtlVarMap var_resultMap_111130 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3580)) ;
                const GALGAS_gtlList temp_12 = object ;
                cEnumerator_list enumerator_111173 (temp_12.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3581)), kEnumeration_up) ;
                GALGAS_uint index_111150 ((uint32_t) 0) ;
                while (enumerator_111173.hasCurrentObject ()) {
                  if (enumerator_111173.current_value (HERE).isValid ()) {
                    if (enumerator_111173.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
                      GALGAS_gtlStruct cast_111236_itemStruct ((cPtr_gtlStruct *) enumerator_111173.current_value (HERE).ptr ()) ;
                      const enumGalgasBool test_13 = cast_111236_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3584)).getter_hasKey (var_key_111066.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3584)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3584)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        GALGAS_gtlData var_keyValue_111353 ;
                        cast_111236_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3585)).method_get (var_key_111066, var_keyValue_111353, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3585)) ;
                        {
                        var_resultMap_111130.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_111353.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3587)), enumerator_111173.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3586)) ;
                        }
                      }else if (kBoolFalse == test_13) {
                        TC_Array <C_FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3591)), GALGAS_string ("item at index ").add_operation (index_111150.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3591)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3591)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3591)).add_operation (var_key_111066.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3592)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3592)), fixItArray14  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3591)) ;
                      }
                    }else if (enumerator_111173.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
                      GALGAS_gtlMap cast_111602_itemMap ((cPtr_gtlMap *) enumerator_111173.current_value (HERE).ptr ()) ;
                      const enumGalgasBool test_15 = cast_111602_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3595)).getter_hasKey (var_key_111066.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3595)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)).boolEnum () ;
                      if (kBoolTrue == test_15) {
                        GALGAS_gtlData var_keyValue_111713 ;
                        cast_111602_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3596)).method_get (var_key_111066, var_keyValue_111713, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3596)) ;
                        {
                        var_resultMap_111130.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_111713.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3598)), enumerator_111173.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3597)) ;
                        }
                      }else if (kBoolFalse == test_15) {
                        TC_Array <C_FixItDescription> fixItArray16 ;
                        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3602)), GALGAS_string ("item at index ").add_operation (index_111150.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3602)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3602)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3602)).add_operation (var_key_111066.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3603)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3603)), fixItArray16  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3602)) ;
                      }
                    }else{
                      TC_Array <C_FixItDescription> fixItArray17 ;
                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3606)), GALGAS_string ("list of struct expected"), fixItArray17  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3606)) ;
                    }
                  }
                  enumerator_111173.gotoNextObject () ;
                  index_111150.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3581)) ;
                }
                result_result = GALGAS_gtlMap::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3609)), var_resultMap_111130  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3609)) ;
              }else if (kBoolFalse == test_11) {
                const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("set").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3610)))).boolEnum () ;
                if (kBoolTrue == test_18) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3611)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3611)) ;
                  }
                  GALGAS_stringset var_resultSet_112211 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_data_types.galgas", 3612)) ;
                  cEnumerator_list enumerator_112247 (object->mAttribute_value, kEnumeration_up) ;
                  while (enumerator_112247.hasCurrentObject ()) {
                    var_resultSet_112211.addAssign_operation (callExtensionGetter_string ((const cPtr_gtlData *) enumerator_112247.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3614))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3614)) ;
                    enumerator_112247.gotoNextObject () ;
                  }
                  result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3617)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3617)), var_resultSet_112211  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3616)) ;
                }else if (kBoolFalse == test_18) {
                  const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("setBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3619)))).boolEnum () ;
                  if (kBoolTrue == test_19) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3620)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3620)) ;
                    }
                    GALGAS_lstring var_key_112502 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3621)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3621)) ;
                    GALGAS_stringset var_resultSet_112566 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_data_types.galgas", 3622)) ;
                    cEnumerator_list enumerator_112602 (object->mAttribute_value, kEnumeration_up) ;
                    while (enumerator_112602.hasCurrentObject ()) {
                      GALGAS_gtlData var_field_112650 ;
                      callExtensionMethod_structField ((const cPtr_gtlData *) enumerator_112602.current_value (HERE).ptr (), var_key_112502, var_field_112650, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3624)) ;
                      var_resultSet_112566.addAssign_operation (callExtensionGetter_string ((const cPtr_gtlData *) var_field_112650.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3625))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3625)) ;
                      enumerator_112602.gotoNextObject () ;
                    }
                    result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3628)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3628)), var_resultSet_112566  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3627)) ;
                  }else if (kBoolFalse == test_19) {
                    const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3630)))).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3631)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3631)) ;
                      }
                      const GALGAS_gtlList temp_21 = object ;
                      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3633)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3633)), temp_21.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3633))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3632)) ;
                    }else if (kBoolFalse == test_20) {
                      const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3635)))).boolEnum () ;
                      if (kBoolTrue == test_22) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3636)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3636)) ;
                        }
                        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3638)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3638)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3637)) ;
                      }else if (kBoolFalse == test_22) {
                        const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3640)))).boolEnum () ;
                        if (kBoolTrue == test_23) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)) ;
                          }
                          result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3643)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3643)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3643))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3642)) ;
                        }else if (kBoolFalse == test_23) {
                          const enumGalgasBool test_24 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3645)).boolEnum () ;
                          if (kBoolTrue == test_24) {
                            const GALGAS_gtlList temp_25 = object ;
                            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3646)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3647)), constinArgument_lib, temp_25, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3646)) ;
                          }else if (kBoolFalse == test_24) {
                            TC_Array <C_FixItDescription> fixItArray26 ;
                            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3653)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3653)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3653)).add_operation (GALGAS_string ("' for list target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3653)), fixItArray26  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3653)) ;
                            result_result.drop () ; // Release error dropped variable
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionGetter_gtlList_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_performGetter (defineExtensionGetter_gtlList_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlList performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3666)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3667)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3667)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_114079 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_114079.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3669)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3669)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3670)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3671)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3672)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3672)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3673)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("insert").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3674)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_intAnyArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)) ;
        }
        GALGAS_uint var_insertIndex_114430 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3676)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3676)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3676)) ;
        GALGAS_gtlData var_node_114483 = constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3677)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_insertIndex_114430.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3678)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          object->mAttribute_value.setter_insertAtIndex (var_node_114483, var_insertIndex_114430, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3679)) ;
          }
        }else if (kBoolFalse == test_4) {
          object->mAttribute_value.addAssign_operation (var_node_114483  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3681)) ;
        }
        object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3683)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_5 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3684)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_gtlList temp_6 = object ;
          GALGAS_gtlData var_copy_114733 = temp_6 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3686)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3687)), constinArgument_lib, var_copy_114733, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3686)) ;
          GALGAS_gtlList temp_7 ;
          if (var_copy_114733.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlList *> (var_copy_114733.ptr ())) {
              temp_7 = (cPtr_gtlList *) var_copy_114733.ptr () ;
            }else{
              inCompiler->castError ("gtlList", var_copy_114733.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)) ;
            }
          }
          object->mAttribute_value = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3692)) ;
          object->mAttribute_where = var_copy_114733.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3693)) ;
          object->mAttribute_meta = var_copy_114733.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3694)) ;
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3696)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3696)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3696)).add_operation (GALGAS_string ("' for list target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3696)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3696)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionSetter_gtlList_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_performSetter (defineExtensionSetter_gtlList_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlList setItemAtIndex'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_setItemAtIndex (cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_data,
                                                    const GALGAS_gtlInt constinArgument_index,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  {
  object->mAttribute_value.setter_setValueAtIndex (constinArgument_data, constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3704)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3704)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3704)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionSetter_gtlList_setItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_setItemAtIndex (defineExtensionSetter_gtlList_setItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension setter '@gtlList deleteItemAtIndex'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_uint var_indexUint_115275 = constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3710)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3710)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_indexUint_115275.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3711)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_indexUint_115275.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      object->mAttribute_value = object->mAttribute_value.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3713)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_indexUint_115275.objectCompare (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3714)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3714)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        object->mAttribute_value = object->mAttribute_value.getter_subListToIndex (var_indexUint_115275.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3715)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3715)) ;
      }else if (kBoolFalse == test_2) {
        object->mAttribute_value = object->mAttribute_value.getter_subListToIndex (var_indexUint_115275.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3717)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3717)).add_operation (object->mAttribute_value.getter_subListFromIndex (var_indexUint_115275.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3718)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3718)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3717)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                          extensionSetter_gtlList_deleteItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_deleteItemAtIndex (defineExtensionSetter_gtlList_deleteItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlList itemAtIndex'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlList_itemAtIndex (const cPtr_gtlData * inObject,
                                                 GALGAS_gtlData & outArgument_data,
                                                 const GALGAS_gtlInt constinArgument_index,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  outArgument_data = object->mAttribute_value.getter_valueAtIndex (constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3727)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3727)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3727)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlList_itemAtIndex (void) {
  enterExtensionMethod_itemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                    extensionMethod_gtlList_itemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlList_itemAtIndex (defineExtensionMethod_gtlList_itemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlList hasItemAtIndex'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlList_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                           const GALGAS_gtlInt & constinArgument_index,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_bool (kIsStrictSup, object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3734)).objectCompare (constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3734)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)))) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_hasItemAtIndex (void) {
  enterExtensionGetter_hasItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionGetter_gtlList_hasItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_hasItemAtIndex (defineExtensionGetter_gtlList_hasItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension setter '@gtlList appendItem'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  object->mAttribute_value.addAssign_operation (constinArgument_item  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3740)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionSetter_gtlList_appendItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_appendItem (defineExtensionSetter_gtlList_appendItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMap_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint & constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3752)).add_operation (GALGAS_string ("map: @[\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3752)) ;
  cEnumerator_gtlVarMap enumerator_116402 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_116402.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3755))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3755)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3755)).add_operation (enumerator_116402.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3756)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)).add_operation (GALGAS_string ("\" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_116402.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3755)) ;
    enumerator_116402.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3759)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3759)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3759)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_desc (defineExtensionGetter_gtlMap_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMap_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3763)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_string (defineExtensionGetter_gtlMap_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlMap_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3767)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_lstring (defineExtensionGetter_gtlMap_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlMap_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a map to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3771)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_bool (defineExtensionGetter_gtlMap_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlMap int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlMap_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a map to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3775)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                            extensionGetter_gtlMap_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_int (defineExtensionGetter_gtlMap_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlMap_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a map to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3779)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_float (defineExtensionGetter_gtlMap_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3783)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_plusOp (defineExtensionGetter_gtlMap_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3787)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_minusOp (defineExtensionGetter_gtlMap_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3791)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_notOp (defineExtensionGetter_gtlMap_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3795)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_addOp (defineExtensionGetter_gtlMap_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3799)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_subOp (defineExtensionGetter_gtlMap_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3803)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_mulOp (defineExtensionGetter_gtlMap_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3807)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_divOp (defineExtensionGetter_gtlMap_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_modOp (defineExtensionGetter_gtlMap_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3815)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_andOp (defineExtensionGetter_gtlMap_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3819)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_orOp (defineExtensionGetter_gtlMap_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3823)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_xorOp (defineExtensionGetter_gtlMap_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3827)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_slOp (defineExtensionGetter_gtlMap_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3831)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_srOp (defineExtensionGetter_gtlMap_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlMap temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3836)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_118771 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3836)) ;
    GALGAS_bool var_equal_118814 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3838)).objectCompare (var_rValue_118771.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3838)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_118814 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_118814 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_118939 (object->mAttribute_value, kEnumeration_up) ;
      while (enumerator_118939.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_118771.getter_hasKey (enumerator_118939.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3843)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3843)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_119024 ;
          var_rValue_118771.method_get (enumerator_118939.current_lkey (HERE), var_rData_119024, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3844)) ;
          var_equal_118814 = var_equal_118814.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_118939.current_value (HERE).ptr (), var_rData_119024, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3845)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3845)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3845)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_118814 = GALGAS_bool (false) ;
        }
        enumerator_118939.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3851)), var_equal_118814.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3851))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3851)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3853)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3853)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_neqOp (defineExtensionGetter_gtlMap_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlMap temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3859)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_119394 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3859)) ;
    GALGAS_bool var_equal_119437 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3861)).objectCompare (var_rValue_119394.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3861)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_119437 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_119437 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_119562 (object->mAttribute_value, kEnumeration_up) ;
      while (enumerator_119562.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_119394.getter_hasKey (enumerator_119562.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3866)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_119647 ;
          var_rValue_119394.method_get (enumerator_119562.current_lkey (HERE), var_rData_119647, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3867)) ;
          var_equal_119437 = var_equal_119437.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_119562.current_value (HERE).ptr (), var_rData_119647, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3868)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3868)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3868)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_119437 = GALGAS_bool (false) ;
        }
        enumerator_119562.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3874)), var_equal_119437  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3874)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3876)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3876)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_eqOp (defineExtensionGetter_gtlMap_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a map does not support the > operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3881)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_gtOp (defineExtensionGetter_gtlMap_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a map does not support the >= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3885)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_geOp (defineExtensionGetter_gtlMap_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a map does not support the < operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3889)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_ltOp (defineExtensionGetter_gtlMap_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("a map does not support the <= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3893)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_leOp (defineExtensionGetter_gtlMap_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlMap embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlMap_embeddedType (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3898)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                     extensionGetter_gtlMap_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_embeddedType (defineExtensionGetter_gtlMap_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlMap addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlMap_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3903))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3903)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlMap_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionMethod_gtlMap_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlMap_addMyValue (defineExtensionMethod_gtlMap_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlMap performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring & constinArgument_methodName,
                                                            const GALGAS_gtlDataList & constinArgument_arguments,
                                                            const GALGAS_library & constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3915)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3916)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3916)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3918)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3919)), object->mAttribute_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3920)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3920))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3917)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3922)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3923)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3923)) ;
      }
      const GALGAS_gtlMap temp_2 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3925)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3925)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3925))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3924)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3927)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3928)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3928)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3930)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3930)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3929)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3932)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3933)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3933)) ;
          }
          GALGAS_list var_resultList_121788 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3934)) ;
          const GALGAS_gtlMap temp_5 = object ;
          cEnumerator_gtlVarMap enumerator_121836 (temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3935)), kEnumeration_up) ;
          while (enumerator_121836.hasCurrentObject ()) {
            var_resultList_121788.addAssign_operation (enumerator_121836.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3936)) ;
            enumerator_121836.gotoNextObject () ;
          }
          result_result = GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3938)), var_resultList_121788  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3938)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3939)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3940)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3940)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3942)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3942)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3942))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3941)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3944)).boolEnum () ;
            if (kBoolTrue == test_7) {
              const GALGAS_gtlMap temp_8 = object ;
              result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3945)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3946)), constinArgument_lib, temp_8, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3945)) ;
            }else if (kBoolFalse == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3952)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3952)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3952)).add_operation (GALGAS_string ("' for map target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3952)), fixItArray9  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3952)) ;
              result_result.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionGetter_gtlMap_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_performGetter (defineExtensionGetter_gtlMap_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlMap performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlMap_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3965)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3966)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3966)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3967)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3967)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3967)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3967)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3967)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_122850 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_122850.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3968)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3968)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3969)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3970)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3971)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3971)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3972)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3973)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlMap temp_4 = object ;
        GALGAS_gtlData var_copy_123145 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3975)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3976)), constinArgument_lib, var_copy_123145, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3975)) ;
        GALGAS_gtlMap temp_5 ;
        if (var_copy_123145.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlMap *> (var_copy_123145.ptr ())) {
            temp_5 = (cPtr_gtlMap *) var_copy_123145.ptr () ;
          }else{
            inCompiler->castError ("gtlMap", var_copy_123145.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3981)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3981)) ;
        object->mAttribute_where = var_copy_123145.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3982)) ;
        object->mAttribute_meta = var_copy_123145.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3983)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3985)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3985)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3985)).add_operation (GALGAS_string ("' for map target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3985)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3985)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_performSetter (defineExtensionSetter_gtlMap_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension setter '@gtlMap setMapItem'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlMap_setMapItem (cPtr_gtlData * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlData constinArgument_data,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  {
  extensionSetter_replaceOrCreate (object->mAttribute_value, constinArgument_name, constinArgument_data, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3996)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionSetter_gtlMap_setMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_setMapItem (defineExtensionSetter_gtlMap_setMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlMap deleteMapItem'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlMap_deleteMapItem (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_name,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  {
  GALGAS_gtlData joker_123847 ; // Joker input parameter
  object->mAttribute_value.setter_del (constinArgument_name, joker_123847, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4002)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_deleteMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_deleteMapItem (defineExtensionSetter_gtlMap_deleteMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension method '@gtlMap mapItem'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlMap_mapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring constinArgument_name,
                                            GALGAS_gtlData & outArgument_result,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4009)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4009)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4010)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4012)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4012))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4012)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlMap_mapItem (void) {
  enterExtensionMethod_mapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionMethod_gtlMap_mapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlMap_mapItem (defineExtensionMethod_gtlMap_mapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlMap hasMapItem'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlMap_hasMapItem (const cPtr_gtlData * inObject,
                                                      const GALGAS_lstring & constinArgument_name,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4020)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4020)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_hasMapItem (void) {
  enterExtensionGetter_hasMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionGetter_gtlMap_hasMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_hasMapItem (defineExtensionGetter_gtlMap_hasMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlLetUnconstructedInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetUnconstructedInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetUnconstructedInstruction * object = (const cPtr_gtlLetUnconstructedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetUnconstructedInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, GALGAS_gtlUnconstructed::constructor_new (callExtensionGetter_location ((const cPtr_gtlVarItem *) object->mAttribute_lValue.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 89)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 89)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 89))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetUnconstructedInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction.mSlotID,
                                extensionMethod_gtlLetUnconstructedInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetUnconstructedInstruction_execute (defineExtensionMethod_gtlLetUnconstructedInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlLetInstruction execute'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                       GALGAS_gtlContext & /* ioArgument_context */,
                                                       GALGAS_gtlData & ioArgument_vars,
                                                       GALGAS_library & ioArgument_lib,
                                                       GALGAS_string & /* ioArgument_outputString */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetInstruction * object = (const cPtr_gtlLetInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetInstruction.mSlotID,
                                extensionMethod_gtlLetInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetInstruction_execute (defineExtensionMethod_gtlLetInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetAddInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetAddInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAddInstruction * object = (const cPtr_gtlLetAddInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAddInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_addOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 129)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 126)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetAddInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAddInstruction.mSlotID,
                                extensionMethod_gtlLetAddInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetAddInstruction_execute (defineExtensionMethod_gtlLetAddInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetSubstractInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetSubstractInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetSubstractInstruction * object = (const cPtr_gtlLetSubstractInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetSubstractInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_subOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 148)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetSubstractInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetSubstractInstruction.mSlotID,
                                extensionMethod_gtlLetSubstractInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetSubstractInstruction_execute (defineExtensionMethod_gtlLetSubstractInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetMultiplyInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetMultiplyInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & /* ioArgument_context */,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & /* ioArgument_outputString */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetMultiplyInstruction * object = (const cPtr_gtlLetMultiplyInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetMultiplyInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_mulOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 167)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetMultiplyInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetMultiplyInstruction.mSlotID,
                                extensionMethod_gtlLetMultiplyInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetMultiplyInstruction_execute (defineExtensionMethod_gtlLetMultiplyInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLetDivideInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetDivideInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetDivideInstruction * object = (const cPtr_gtlLetDivideInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetDivideInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 186)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 183)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetDivideInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetDivideInstruction.mSlotID,
                                extensionMethod_gtlLetDivideInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetDivideInstruction_execute (defineExtensionMethod_gtlLetDivideInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLetModuloInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetModuloInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetModuloInstruction * object = (const cPtr_gtlLetModuloInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetModuloInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 205)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 202)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetModuloInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetModuloInstruction.mSlotID,
                                extensionMethod_gtlLetModuloInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetModuloInstruction_execute (defineExtensionMethod_gtlLetModuloInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetShiftLeftInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetShiftLeftInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftLeftInstruction * object = (const cPtr_gtlLetShiftLeftInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftLeftInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_slOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 224)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetShiftLeftInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftLeftInstruction.mSlotID,
                                extensionMethod_gtlLetShiftLeftInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetShiftLeftInstruction_execute (defineExtensionMethod_gtlLetShiftLeftInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlLetShiftRightInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetShiftRightInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & /* ioArgument_context */,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & /* ioArgument_outputString */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftRightInstruction * object = (const cPtr_gtlLetShiftRightInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftRightInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_srOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 243)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetShiftRightInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftRightInstruction.mSlotID,
                                extensionMethod_gtlLetShiftRightInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetShiftRightInstruction_execute (defineExtensionMethod_gtlLetShiftRightInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetAndInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetAndInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAndInstruction * object = (const cPtr_gtlLetAndInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAndInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_andOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 262)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetAndInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAndInstruction.mSlotID,
                                extensionMethod_gtlLetAndInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetAndInstruction_execute (defineExtensionMethod_gtlLetAndInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetOrInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetOrInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & /* ioArgument_context */,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetOrInstruction * object = (const cPtr_gtlLetOrInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetOrInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_orOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 281)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetOrInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetOrInstruction.mSlotID,
                                extensionMethod_gtlLetOrInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetOrInstruction_execute (defineExtensionMethod_gtlLetOrInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetXorInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetXorInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetXorInstruction * object = (const cPtr_gtlLetXorInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetXorInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_xorOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 300)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 297)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetXorInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetXorInstruction.mSlotID,
                                extensionMethod_gtlLetXorInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetXorInstruction_execute (defineExtensionMethod_gtlLetXorInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlUnletInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlUnletInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & /* ioArgument_context */,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlUnletInstruction * object = (const cPtr_gtlUnletInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnletInstruction) ;
  extensionMethod_delete (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlUnletInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlUnletInstruction.mSlotID,
                                extensionMethod_gtlUnletInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlUnletInstruction_execute (defineExtensionMethod_gtlUnletInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlTemplateStringInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateStringInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & /* ioArgument_vars */,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & ioArgument_outputString,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateStringInstruction * object = (const cPtr_gtlTemplateStringInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateStringInstruction) ;
  ioArgument_outputString.plusAssign_operation(object->mAttribute_value, inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 335)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateStringInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateStringInstruction.mSlotID,
                                extensionMethod_gtlTemplateStringInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateStringInstruction_execute (defineExtensionMethod_gtlTemplateStringInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlEmitInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlEmitInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                        GALGAS_gtlContext & /* ioArgument_context */,
                                                        GALGAS_gtlData & ioArgument_vars,
                                                        GALGAS_library & ioArgument_lib,
                                                        GALGAS_string & ioArgument_outputString,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEmitInstruction * object = (const cPtr_gtlEmitInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmitInstruction) ;
  ioArgument_outputString.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 351)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 351)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlEmitInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlEmitInstruction.mSlotID,
                                extensionMethod_gtlEmitInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlEmitInstruction_execute (defineExtensionMethod_gtlEmitInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@gtlWriteToInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlWriteToInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                           GALGAS_gtlContext & ioArgument_context,
                                                           GALGAS_gtlData & ioArgument_vars,
                                                           GALGAS_library & ioArgument_lib,
                                                           GALGAS_string & /* ioArgument_outputString */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWriteToInstruction * object = (const cPtr_gtlWriteToInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWriteToInstruction) ;
  GALGAS_string var_fullFileName_10481 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileNameExpression.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 369)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 369)) ;
  GALGAS_gtlString var_fileName_10551 = GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 372)), var_fullFileName_10481.getter_lastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 373))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 370)) ;
  GALGAS_gtlString var_filePath_10654 = GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 377)), var_fullFileName_10481.getter_nativePathWithUnixPath (SOURCE_FILE ("gtl_instructions.galgas", 378))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 375)) ;
  GALGAS_string var_result_10759 = GALGAS_string::makeEmptyString () ;
  GALGAS_gtlData var_varsCopy_10784 = ioArgument_vars ;
  {
  var_varsCopy_10784.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_10886 = (cPtr_gtlData *) var_varsCopy_10784.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_10886, GALGAS_lstring::constructor_new (GALGAS_string ("FILENAME"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 385)), var_fileName_10551, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 384)) ;
  }
  {
  var_varsCopy_10784.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_10985 = (cPtr_gtlData *) var_varsCopy_10784.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_10985, GALGAS_lstring::constructor_new (GALGAS_string ("FILEPATH"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 390)), var_filePath_10654, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 389)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 394)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionMethod_execute (object->mAttribute_instructions, ioArgument_context, var_varsCopy_10784, ioArgument_lib, var_result_10759, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 395)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_isExecutable.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_directory_11256 = var_fullFileName_10481.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 398)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_directory_11256.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_directory_11256.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 399)) ;
        }
        var_result_10759.method_writeToExecutableFile (var_fullFileName_10481, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 400)) ;
      }else if (kBoolFalse == test_2) {
        var_result_10759.method_makeDirectoryAndWriteToFile (var_fullFileName_10481, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 402)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlWriteToInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWriteToInstruction.mSlotID,
                                extensionMethod_gtlWriteToInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlWriteToInstruction_execute (defineExtensionMethod_gtlWriteToInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@gtlTemplateInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                            GALGAS_gtlContext & ioArgument_context,
                                                            GALGAS_gtlData & ioArgument_vars,
                                                            GALGAS_library & ioArgument_lib,
                                                            GALGAS_string & ioArgument_outputString,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateInstruction * object = (const cPtr_gtlTemplateInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateInstruction) ;
  GALGAS_gtlContext var_newContext_12271 = ioArgument_context ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_prefix.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 431)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    var_newContext_12271.setter_setPrefix (object->mAttribute_prefix COMMA_SOURCE_FILE ("gtl_instructions.galgas", 432)) ;
    }
  }
  GALGAS_gtlString temp_1 ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)).isValid ()) {
    if (NULL != dynamic_cast <const cPtr_gtlString *> (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)).ptr ())) {
      temp_1 = (cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)).ptr () ;
    }else{
      inCompiler->castError ("gtlString", callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)) ;
    }
  }
  GALGAS_lstring var_templateFileName_12452 = callExtensionGetter_fullTemplateFileName ((const cPtr_gtlContext *) var_newContext_12271.ptr (), ioArgument_context, ioArgument_vars, callExtensionGetter_lstring ((const cPtr_gtlString *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 436)) ;
  GALGAS_gtlData var_localVars_12594 ;
  {
  var_newContext_12271.setter_setInputVars (GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 443)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 443)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_isGlobal.operator_not (SOURCE_FILE ("gtl_instructions.galgas", 444)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_localVars_12594 = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 447)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_instructions.galgas", 447))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 447)) ;
    cEnumerator_gtlExpressionList enumerator_12859 (object->mAttribute_arguments, kEnumeration_up) ;
    while (enumerator_12859.hasCurrentObject ()) {
      GALGAS_gtlData var_evaluedArg_12888 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_12859.current_expression (HERE).ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 449)) ;
      {
      var_newContext_12271.insulate (HERE) ;
      cPtr_gtlContext * ptr_12947 = (cPtr_gtlContext *) var_newContext_12271.ptr () ;
      callExtensionSetter_addInputVariable ((cPtr_gtlContext *) ptr_12947, var_evaluedArg_12888, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 450)) ;
      }
      enumerator_12859.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_2) {
    var_localVars_12594 = ioArgument_vars ;
  }
  GALGAS_bool var_found_13231 ;
  GALGAS_gtlTemplate var_result_13256 ;
  {
  ioArgument_lib.insulate (HERE) ;
  cPtr_library * ptr_13133 = (cPtr_library *) ioArgument_lib.ptr () ;
  callExtensionSetter_getTemplate ((cPtr_library *) ptr_13133, var_newContext_12271, var_templateFileName_12452, object->mAttribute_ifExists, ioArgument_lib, var_found_13231, var_result_13256, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 458)) ;
  }
  const enumGalgasBool test_3 = var_found_13231.boolEnum () ;
  if (kBoolTrue == test_3) {
    callExtensionMethod_execute ((const cPtr_gtlTemplate *) var_result_13256.ptr (), var_newContext_12271, var_localVars_12594, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 469)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_ifExists.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_gtlData var_localMap_13470 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 473)) ;
      extensionMethod_execute (object->mAttribute_instructionsIfNotFound, ioArgument_context, var_localMap_13470, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 474)) ;
      ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_13470.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 475)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateInstruction.mSlotID,
                                extensionMethod_gtlTemplateInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateInstruction_execute (defineExtensionMethod_gtlTemplateInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlGetColumnInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlGetColumnInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & ioArgument_outputString,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlGetColumnInstruction * object = (const cPtr_gtlGetColumnInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetColumnInstruction) ;
  GALGAS_string var_value_14199 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_searchEndOfLine_14228 = GALGAS_bool (true) ;
  GALGAS_uint var_index_14249 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 496)) ;
  if (ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 497)).isValid ()) {
    uint32_t variant_14280 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 497)).uintValue () ;
    bool loop_14280 = true ;
    while (loop_14280) {
      loop_14280 = GALGAS_bool (kIsStrictSup, var_index_14249.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_14228 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 497)).isValid () ;
      if (loop_14280) {
        loop_14280 = GALGAS_bool (kIsStrictSup, var_index_14249.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_14228 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 497)).boolValue () ;
      }
      if (loop_14280 && (0 == variant_14280)) {
        loop_14280 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 497)) ;
      }
      if (loop_14280) {
        variant_14280 -- ;
        var_searchEndOfLine_14228 = GALGAS_bool (kIsNotEqual, ioArgument_outputString.getter_characterAtIndex (var_index_14249.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 498)).objectCompare (GALGAS_char (TO_UNICODE (10)))) ;
        var_index_14249.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 499)) ;
        const enumGalgasBool test_0 = var_searchEndOfLine_14228.boolEnum () ;
        if (kBoolTrue == test_0) {
          var_value_14199.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 501)) ;
        }
      }
    }
  }
  extensionMethod_set (object->mAttribute_destVariable, ioArgument_vars, ioArgument_lib, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 504)), var_value_14199  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 504)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlGetColumnInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlGetColumnInstruction.mSlotID,
                                extensionMethod_gtlGetColumnInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlGetColumnInstruction_execute (defineExtensionMethod_gtlGetColumnInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlIfStatementInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlIfStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & ioArgument_context,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & ioArgument_outputString,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlIfStatementInstruction * object = (const cPtr_gtlIfStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlIfStatementInstruction) ;
  GALGAS_gtlData var_localMap_15182 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 527)) ;
  GALGAS_bool var_noConditionMatching_15234 = GALGAS_bool (true) ;
  cEnumerator_gtlThenElsifStatementList enumerator_15267 (object->mAttribute_thenElsifList, kEnumeration_up) ;
  bool bool_0 = var_noConditionMatching_15234.isValidAndTrue () ;
  if (enumerator_15267.hasCurrentObject () && bool_0) {
    while (enumerator_15267.hasCurrentObject () && bool_0) {
      GALGAS_gtlData var_dataCondition_15323 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_15267.current_condition (HERE).ptr (), var_localMap_15182, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 531)) ;
      const enumGalgasBool test_1 = GALGAS_bool (var_dataCondition_15323.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_gtlBool temp_2 ;
        if (var_dataCondition_15323.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_dataCondition_15323.ptr ())) {
            temp_2 = (cPtr_gtlBool *) var_dataCondition_15323.ptr () ;
          }else{
            inCompiler->castError ("gtlBool", var_dataCondition_15323.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 533)) ;
          }
        }
        GALGAS_bool var_boolCondition_15424 = temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 533)) ;
        const enumGalgasBool test_3 = var_boolCondition_15424.boolEnum () ;
        if (kBoolTrue == test_3) {
          extensionMethod_execute (enumerator_15267.current_instructionList (HERE), ioArgument_context, var_localMap_15182, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 535)) ;
          var_noConditionMatching_15234 = GALGAS_bool (false) ;
        }
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_dataCondition_15323.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 539)), GALGAS_string ("bool expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 539)) ;
      }
      enumerator_15267.gotoNextObject () ;
      if (enumerator_15267.hasCurrentObject ()) {
        bool_0 = var_noConditionMatching_15234.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_5 = var_noConditionMatching_15234.boolEnum () ;
  if (kBoolTrue == test_5) {
    extensionMethod_execute (object->mAttribute_elseList, ioArgument_context, var_localMap_15182, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 543)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_15182.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 546)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlIfStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlIfStatementInstruction.mSlotID,
                                extensionMethod_gtlIfStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlIfStatementInstruction_execute (defineExtensionMethod_gtlIfStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlForeachStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & ioArgument_outputString,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = (const cPtr_gtlForeachStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_gtlData var_localMap_18998 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 657)) ;
  GALGAS_gtlData var_iterableData_19043 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_iterable.ptr (), var_localMap_18998, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 658)) ;
  if (var_iterableData_19043.isValid ()) {
    if (var_iterableData_19043.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_19127_iterableMap ((cPtr_gtlMap *) var_iterableData_19043.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_0 = object ;
      callExtensionMethod_iterateOnMap ((const cPtr_gtlForeachStatementInstruction *) temp_0.ptr (), ioArgument_context, var_localMap_18998, ioArgument_lib, ioArgument_outputString, cast_19127_iterableMap, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 661)) ;
    }else if (var_iterableData_19043.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_19239_iterableList ((cPtr_gtlList *) var_iterableData_19043.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_1 = object ;
      callExtensionMethod_iterateOnList ((const cPtr_gtlForeachStatementInstruction *) temp_1.ptr (), ioArgument_context, var_localMap_18998, ioArgument_lib, ioArgument_outputString, cast_19239_iterableList, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 663)) ;
    }else if (var_iterableData_19043.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet) {
      GALGAS_gtlSet cast_19352_iterableSet ((cPtr_gtlSet *) var_iterableData_19043.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_2 = object ;
      callExtensionMethod_iterateOnSet ((const cPtr_gtlForeachStatementInstruction *) temp_2.ptr (), ioArgument_context, var_localMap_18998, ioArgument_lib, ioArgument_outputString, cast_19352_iterableSet, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 665)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_iterable.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 667)), GALGAS_string ("Map, list or set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 667)) ;
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_18998.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 669)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                extensionMethod_gtlForeachStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_execute (defineExtensionMethod_gtlForeachStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlForStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForStatementInstruction * object = (const cPtr_gtlForStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForStatementInstruction) ;
  GALGAS_lstring var_indexName_20096 = GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 688)) ;
  GALGAS_gtlData var_localMap_20140 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 689)) ;
  cEnumerator_gtlExpressionList enumerator_20182 (object->mAttribute_iterable, kEnumeration_up) ;
  GALGAS_uint index_20167 ((uint32_t) 0) ;
  while (enumerator_20182.hasCurrentObject ()) {
    GALGAS_gtlData var_value_20214 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_20182.current_expression (HERE).ptr (), var_localMap_20140, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 692)) ;
    {
    var_localMap_20140.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_20265 = (cPtr_gtlData *) var_localMap_20140.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20265, object->mAttribute_identifier, var_value_20214, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 693)) ;
    }
    {
    var_localMap_20140.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_20316 = (cPtr_gtlData *) var_localMap_20140.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20316, var_indexName_20096, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 696)), index_20167.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 696))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 696)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 694)) ;
    }
    extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_20140, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 698)) ;
    if (enumerator_20182.hasNextObject ()) {
      extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, var_localMap_20140, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 700)) ;
    }
    enumerator_20182.gotoNextObject () ;
    index_20167.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 690)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_20140.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 702)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForStatementInstruction.mSlotID,
                                extensionMethod_gtlForStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForStatementInstruction_execute (defineExtensionMethod_gtlForStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlLoopStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLoopStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & ioArgument_context,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & ioArgument_outputString,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoopStatementInstruction * object = (const cPtr_gtlLoopStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoopStatementInstruction) ;
  GALGAS_gtlData var_localMap_21301 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 726)) ;
  GALGAS_gtlData var_startData_21343 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_start.ptr (), var_localMap_21301, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 727)) ;
  GALGAS_gtlData var_stopData_21393 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_stop.ptr (), var_localMap_21301, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 728)) ;
  GALGAS_gtlData var_stepData_21444 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_step.ptr (), var_localMap_21301, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 729)) ;
  GALGAS_bigint var_startVal_21494 ;
  GALGAS_bigint var_stopVal_21512 ;
  GALGAS_bigint var_stepVal_21530 ;
  const enumGalgasBool test_0 = GALGAS_bool (var_startData_21343.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_startData_21343.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_startData_21343.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_startData_21343.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_startData_21343.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 734)) ;
      }
    }
    var_startVal_21494 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 734)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_start.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 736)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 736)) ;
    var_startVal_21494.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_3 = GALGAS_bool (var_stopData_21393.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_gtlInt temp_4 ;
    if (var_stopData_21393.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stopData_21393.ptr ())) {
        temp_4 = (cPtr_gtlInt *) var_stopData_21393.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_stopData_21393.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 739)) ;
      }
    }
    var_stopVal_21512 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 739)) ;
  }else if (kBoolFalse == test_3) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_stop.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 741)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 741)) ;
    var_stopVal_21512.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_6 = GALGAS_bool (var_stepData_21444.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_gtlInt temp_7 ;
    if (var_stepData_21444.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stepData_21444.ptr ())) {
        temp_7 = (cPtr_gtlInt *) var_stepData_21444.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_stepData_21444.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 744)) ;
      }
    }
    var_stepVal_21530 = temp_7.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 744)).multiply_operation (object->mAttribute_upDown.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 744)) ;
  }else if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_step.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 746)), GALGAS_string ("int expected"), fixItArray8  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 746)) ;
    var_stepVal_21530.drop () ; // Release error dropped variable
  }
  GALGAS_bigint var_direction_21992 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 748)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_stepVal_21530.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    var_direction_21992 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21512.substract_operation (var_startVal_21494, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 750)).multiply_operation (var_direction_21992, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 750)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 750)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, var_localMap_21301, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 751)) ;
    GALGAS_uint var_count_22176 = var_stopVal_21512.substract_operation (var_startVal_21494, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)).multiply_operation (var_direction_21992, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL).getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)) ;
    if (var_count_22176.isValid ()) {
      uint32_t variant_22233 = var_count_22176.uintValue () ;
      bool loop_22233 = true ;
      while (loop_22233) {
          {
          var_localMap_21301.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_22259 = (cPtr_gtlData *) var_localMap_21301.ptr () ;
          callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_22259, object->mAttribute_identifier, GALGAS_gtlInt::constructor_new (object->mAttribute_identifier.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 756)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 756)), var_startVal_21494  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 754)) ;
          }
          extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_21301, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 758)) ;
          var_startVal_21494 = var_startVal_21494.add_operation (var_stepVal_21530, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 759)) ;
        loop_22233 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21512.substract_operation (var_startVal_21494, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).multiply_operation (var_direction_21992, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)))).isValid () ;
        if (loop_22233) {
          loop_22233 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21512.substract_operation (var_startVal_21494, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).multiply_operation (var_direction_21992, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)))).boolValue () ;
        }
        if (loop_22233 && (0 == variant_22233)) {
          loop_22233 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 753)) ;
        }
        if (loop_22233) {
          variant_22233 -- ;
          extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, var_localMap_21301, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 761)) ;
        }
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, var_localMap_21301, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 763)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_21301.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 765)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLoopStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLoopStatementInstruction.mSlotID,
                                extensionMethod_gtlLoopStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLoopStatementInstruction_execute (defineExtensionMethod_gtlLoopStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlRepeatStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlRepeatStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                   GALGAS_gtlContext & ioArgument_context,
                                                                   GALGAS_gtlData & ioArgument_vars,
                                                                   GALGAS_library & ioArgument_lib,
                                                                   GALGAS_string & ioArgument_outputString,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlRepeatStatementInstruction * object = (const cPtr_gtlRepeatStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlRepeatStatementInstruction) ;
  GALGAS_gtlData var_localMap_23272 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 784)) ;
  GALGAS_bool var_boolCondition_23315 = GALGAS_bool (false) ;
  GALGAS_gtlData var_limitData_23344 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_limit.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 786)) ;
  GALGAS_uint var_limitVal_23387 ;
  const enumGalgasBool test_0 = GALGAS_bool (var_limitData_23344.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_limitData_23344.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_limitData_23344.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_limitData_23344.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_limitData_23344.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 790)) ;
      }
    }
    var_limitVal_23387 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 790)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 790)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_limit.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 792)), GALGAS_string ("int exprected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 792)) ;
    var_limitVal_23387.drop () ; // Release error dropped variable
  }
  if (var_limitVal_23387.isValid ()) {
    uint32_t variant_23543 = var_limitVal_23387.uintValue () ;
    bool loop_23543 = true ;
    while (loop_23543) {
        extensionMethod_execute (object->mAttribute_continueList, ioArgument_context, var_localMap_23272, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 796)) ;
        GALGAS_gtlData var_conditionData_23650 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_condition.ptr (), var_localMap_23272, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 797)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_conditionData_23650.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 798)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlBool temp_4 ;
          if (var_conditionData_23650.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_conditionData_23650.ptr ())) {
              temp_4 = (cPtr_gtlBool *) var_conditionData_23650.ptr () ;
            }else{
              inCompiler->castError ("gtlBool", var_conditionData_23650.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 799)) ;
            }
          }
          var_boolCondition_23315 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 799)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_conditionData_23650.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)), GALGAS_string ("bool expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)) ;
        }
      loop_23543 = var_boolCondition_23315.isValid () ;
      if (loop_23543) {
        loop_23543 = var_boolCondition_23315.boolValue () ;
      }
      if (loop_23543 && (0 == variant_23543)) {
        loop_23543 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 795)) ;
      }
      if (loop_23543) {
        variant_23543 -- ;
        extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_23272, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 804)) ;
      }
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_23272.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 806)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlRepeatStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction.mSlotID,
                                extensionMethod_gtlRepeatStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlRepeatStatementInstruction_execute (defineExtensionMethod_gtlRepeatStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlErrorStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlErrorStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlErrorStatementInstruction * object = (const cPtr_gtlErrorStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlErrorStatementInstruction) ;
  GALGAS_location var_errorLocation_24538 ;
  const enumGalgasBool test_0 = object->mAttribute_hereInstead.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_errorLocation_24538 = object->mAttribute_where ;
  }else if (kBoolFalse == test_0) {
    var_errorLocation_24538 = extensionGetter_get (object->mAttribute_identifier, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 828)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 828)) ;
  }
  GALGAS_gtlData var_errorMessageData_24684 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_errorMessage.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 830)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_errorMessageData_24684.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 831)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlString temp_2 ;
    if (var_errorMessageData_24684.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (var_errorMessageData_24684.ptr ())) {
        temp_2 = (cPtr_gtlString *) var_errorMessageData_24684.ptr () ;
      }else{
        inCompiler->castError ("gtlString", var_errorMessageData_24684.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 832)) ;
      }
    }
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_errorLocation_24538, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 832)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 832)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_errorMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 834)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 834)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlErrorStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlErrorStatementInstruction.mSlotID,
                                extensionMethod_gtlErrorStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlErrorStatementInstruction_execute (defineExtensionMethod_gtlErrorStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlWarningStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlWarningStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWarningStatementInstruction * object = (const cPtr_gtlWarningStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWarningStatementInstruction) ;
  GALGAS_location var_warningLocation_25471 ;
  const enumGalgasBool test_0 = object->mAttribute_hereInstead.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_warningLocation_25471 = object->mAttribute_where ;
  }else if (kBoolFalse == test_0) {
    var_warningLocation_25471 = extensionGetter_get (object->mAttribute_identifier, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 857)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 857)) ;
  }
  GALGAS_gtlData var_warningMessageData_25623 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_warningMessage.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 859)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_warningMessageData_25623.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 860)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlString temp_2 ;
    if (var_warningMessageData_25623.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (var_warningMessageData_25623.ptr ())) {
        temp_2 = (cPtr_gtlString *) var_warningMessageData_25623.ptr () ;
      }else{
        inCompiler->castError ("gtlString", var_warningMessageData_25623.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 861)) ;
      }
    }
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticWarning (var_warningLocation_25471, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 861)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 861)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_warningMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 863)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 863)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlWarningStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWarningStatementInstruction.mSlotID,
                                extensionMethod_gtlWarningStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlWarningStatementInstruction_execute (defineExtensionMethod_gtlWarningStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlPrintStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlPrintStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlPrintStatementInstruction * object = (const cPtr_gtlPrintStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPrintStatementInstruction) ;
  GALGAS_string var_messageToPrintString_26393 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_messageToPrint.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 882)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 882)) ;
  inCompiler->printMessage (var_messageToPrintString_26393  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 883)) ;
  const enumGalgasBool test_0 = object->mAttribute_carriageReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 884)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlPrintStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlPrintStatementInstruction.mSlotID,
                                extensionMethod_gtlPrintStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlPrintStatementInstruction_execute (defineExtensionMethod_gtlPrintStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlDisplayStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlDisplayStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  GALGAS_gtlData var_variable_27009 = extensionGetter_get (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 900)) ;
  inCompiler->printMessage (extensionGetter_stringPath (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 901)).add_operation (GALGAS_string (" from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 901)).add_operation (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 902)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 902)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) var_variable_27009.ptr (), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 902))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 901)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlDisplayStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                extensionMethod_gtlDisplayStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlDisplayStatementInstruction_execute (defineExtensionMethod_gtlDisplayStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlAbstractSortInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlAbstractSortInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlAbstractSortInstruction * object = (const cPtr_gtlAbstractSortInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAbstractSortInstruction) ;
  GALGAS_gtlData var_variable_28932 = extensionGetter_get (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 974)) ;
  if (var_variable_28932.isValid ()) {
    if (var_variable_28932.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_29012_variableList ((cPtr_gtlList *) var_variable_28932.ptr ()) ;
      GALGAS_list var_listToSort_29034 = cast_29012_variableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 977)) ;
      GALGAS_uint var_length_29074 = var_listToSort_29034.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 978)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_length_29074.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const GALGAS_gtlAbstractSortInstruction temp_1 = object ;
        callExtensionMethod_sort ((const cPtr_gtlAbstractSortInstruction *) temp_1.ptr (), var_listToSort_29034, GALGAS_uint ((uint32_t) 0U), var_length_29074.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 980)) ;
      }
      extensionMethod_set (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 985)), var_listToSort_29034  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 982)) ;
    }else{
      GALGAS_gtlVarItem var_lastComponent_29343 ;
      object->mAttribute_variablePath.method_last (var_lastComponent_29343, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 988)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlVarItem *) var_lastComponent_29343.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 989)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 989)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlAbstractSortInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlAbstractSortInstruction.mSlotID,
                                extensionMethod_gtlAbstractSortInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlAbstractSortInstruction_execute (defineExtensionMethod_gtlAbstractSortInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlSortStatementStructInstruction compare'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_sint extensionGetter_gtlSortStatementStructInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                              const GALGAS_gtlData & constinArgument_s_31_,
                                                                              const GALGAS_gtlData & constinArgument_s_32_,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementStructInstruction * object = (const cPtr_gtlSortStatementStructInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementStructInstruction) ;
  const GALGAS_gtlSortStatementStructInstruction temp_0 = object ;
  result_result = callExtensionGetter_compareElements ((const cPtr_gtlSortStatementStructInstruction *) temp_0.ptr (), constinArgument_s_31_, constinArgument_s_32_, object->mAttribute_sortingKey, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1003)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSortStatementStructInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction.mSlotID,
                                extensionGetter_gtlSortStatementStructInstruction_compare) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSortStatementStructInstruction_compare (defineExtensionGetter_gtlSortStatementStructInstruction_compare, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlSortStatementInstruction compare'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_sint extensionGetter_gtlSortStatementInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                        const GALGAS_gtlData & constinArgument_s_31_,
                                                                        const GALGAS_gtlData & constinArgument_s_32_,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementInstruction * object = (const cPtr_gtlSortStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementInstruction) ;
  const enumGalgasBool test_0 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_ltOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1050)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1057)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1051)).multiply_operation (object->mAttribute_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1051)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_gtOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1053)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1056)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_sint ((int32_t) 1L).multiply_operation (object->mAttribute_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1054)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1054)) ;
    }else if (kBoolFalse == test_1) {
      result_result = GALGAS_sint ((int32_t) 0L) ;
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSortStatementInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementInstruction.mSlotID,
                                extensionGetter_gtlSortStatementInstruction_compare) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSortStatementInstruction_compare (defineExtensionGetter_gtlSortStatementInstruction_compare, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlTabStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTabStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTabStatementInstruction * object = (const cPtr_gtlTabStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTabStatementInstruction) ;
  GALGAS_gtlData var_tabValueData_31645 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_tabValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1074)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_tabValueData_31645.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_tabValueData_31645.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_tabValueData_31645.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_tabValueData_31645.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_tabValueData_31645.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1076)) ;
      }
    }
    GALGAS_gtlInt var_tabValueInt_31735 = temp_1 ;
    GALGAS_uint var_currentColumn_31785 = ioArgument_outputString.getter_currentColumn (SOURCE_FILE ("gtl_instructions.galgas", 1077)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_tabValueInt_31735.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1078)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1078)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_tabColumn_31877 = var_tabValueInt_31735.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1079)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1079)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_tabColumn_31877.objectCompare (var_currentColumn_31785)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_outputString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_tabColumn_31877.substract_operation (var_currentColumn_31785, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1083)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1083))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1081)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1081)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_tabValueData_31645.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1089)), GALGAS_string ("int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1089)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTabStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTabStatementInstruction.mSlotID,
                                extensionMethod_gtlTabStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTabStatementInstruction_execute (defineExtensionMethod_gtlTabStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlVariablesInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVariablesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & /* ioArgument_lib */,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVariablesInstruction * object = (const cPtr_gtlVariablesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVariablesInstruction) ;
  GALGAS_string var_delimitor_32597 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1104)) ;
  GALGAS_string var_varDelim_32675 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1105)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1105)) ;
  GALGAS_string var_separator_32755 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 17U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1106)) ;
  inCompiler->printMessage (var_separator_32755.add_operation (GALGAS_string (" Variables "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1107)).add_operation (var_separator_32755, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1107)).add_operation (GALGAS_string ("= Displayed from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1108)).add_operation (var_separator_32755, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1109))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1107)) ;
  inCompiler->printMessage (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1110)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1110))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1110)) ;
  inCompiler->printMessage (var_delimitor_32597  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1111)) ;
  if (ioArgument_vars.isValid ()) {
    if (ioArgument_vars.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_33017_variableMap ((cPtr_gtlStruct *) ioArgument_vars.ptr ()) ;
      cEnumerator_gtlVarMap enumerator_33063 (cast_33017_variableMap.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1114)), kEnumeration_up) ;
      while (enumerator_33063.hasCurrentObject ()) {
        inCompiler->printMessage (var_varDelim_32675  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1115)) ;
        inCompiler->printMessage (enumerator_33063.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1116))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1116)) ;
        inCompiler->printMessage (var_varDelim_32675  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1117)) ;
        inCompiler->printMessage (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_33063.current_value (HERE).ptr (), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1118))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1118)) ;
        enumerator_33063.gotoNextObject () ;
      }
    }else{
      const GALGAS_gtlVariablesInstruction temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlVariablesInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1121)), GALGAS_string ("INTERNAL ERROR. a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1121)) ;
    }
  }
  inCompiler->printMessage (var_delimitor_32597  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1123)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVariablesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlVariablesInstruction.mSlotID,
                                extensionMethod_gtlVariablesInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVariablesInstruction_execute (defineExtensionMethod_gtlVariablesInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLibrariesInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLibrariesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & /* ioArgument_vars */,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLibrariesInstruction * object = (const cPtr_gtlLibrariesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLibrariesInstruction) ;
  GALGAS_string var_delimitor_33729 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1137)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1137)) ;
  GALGAS_string var_varDelim_33807 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1138)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1138)) ;
  GALGAS_string var_separator_33887 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 17U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1139)) ;
  inCompiler->printMessage (var_separator_33887.add_operation (GALGAS_string (" Libraries "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1140)).add_operation (var_separator_33887, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1140)).add_operation (GALGAS_string ("= Displayed from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1141)).add_operation (var_separator_33887, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1142))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1140)) ;
  inCompiler->printMessage (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1143))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1143)) ;
  inCompiler->printMessage (var_delimitor_33729  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1144)) ;
  inCompiler->printMessage (GALGAS_string (" Functions \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1145)) ;
  inCompiler->printMessage (var_varDelim_33807  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1146)) ;
  GALGAS_uint var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlFuncMap enumerator_34202 (ioArgument_lib.getter_funcMap (SOURCE_FILE ("gtl_instructions.galgas", 1148)), kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_34202.hasCurrentObject () && bool_0) {
    while (enumerator_34202.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lineSize_34166.add_operation (enumerator_34202.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1149)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1149)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1149)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1151)) ;
      }
      inCompiler->printMessage (enumerator_34202.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1153))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1153)) ;
      var_lineSize_34166.plusAssign_operation(enumerator_34202.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1154)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1154)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1154)) ;
      enumerator_34202.gotoNextObject () ;
      if (enumerator_34202.hasCurrentObject () && bool_0) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1156)) ;
        var_lineSize_34166.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1157)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1159)) ;
  }
  inCompiler->printMessage (var_delimitor_33729  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1161)) ;
  inCompiler->printMessage (GALGAS_string (" Getters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1162)) ;
  inCompiler->printMessage (var_varDelim_33807  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1163)) ;
  var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlGetterMap enumerator_34555 (ioArgument_lib.getter_getterMap (SOURCE_FILE ("gtl_instructions.galgas", 1165)), kEnumeration_up) ;
  const bool bool_2 = true ;
  if (enumerator_34555.hasCurrentObject () && bool_2) {
    while (enumerator_34555.hasCurrentObject () && bool_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_lineSize_34166.add_operation (enumerator_34555.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1166)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1166)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1166)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1168)) ;
      }
      inCompiler->printMessage (enumerator_34555.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1170))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1170)) ;
      var_lineSize_34166.plusAssign_operation(enumerator_34555.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1171)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1171)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1171)) ;
      enumerator_34555.gotoNextObject () ;
      if (enumerator_34555.hasCurrentObject () && bool_2) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1173)) ;
        var_lineSize_34166.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1174)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1176)) ;
  }
  inCompiler->printMessage (var_delimitor_33729  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1178)) ;
  inCompiler->printMessage (GALGAS_string (" Setters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1179)) ;
  inCompiler->printMessage (var_varDelim_33807  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1180)) ;
  var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlSetterMap enumerator_34908 (ioArgument_lib.getter_setterMap (SOURCE_FILE ("gtl_instructions.galgas", 1182)), kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_34908.hasCurrentObject () && bool_4) {
    while (enumerator_34908.hasCurrentObject () && bool_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_lineSize_34166.add_operation (enumerator_34908.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1183)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1183)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1185)) ;
      }
      inCompiler->printMessage (enumerator_34908.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1187))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1187)) ;
      var_lineSize_34166.plusAssign_operation(enumerator_34908.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1188)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1188)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1188)) ;
      enumerator_34908.gotoNextObject () ;
      if (enumerator_34908.hasCurrentObject () && bool_4) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1190)) ;
        var_lineSize_34166.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1191)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1193)) ;
  }
  inCompiler->printMessage (var_delimitor_33729  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1195)) ;
  inCompiler->printMessage (GALGAS_string (" Templates \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1196)) ;
  inCompiler->printMessage (var_varDelim_33807  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1197)) ;
  var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlTemplateMap enumerator_35265 (ioArgument_lib.getter_templateMap (SOURCE_FILE ("gtl_instructions.galgas", 1199)), kEnumeration_up) ;
  const bool bool_6 = true ;
  if (enumerator_35265.hasCurrentObject () && bool_6) {
    while (enumerator_35265.hasCurrentObject () && bool_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_lineSize_34166.add_operation (enumerator_35265.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1200)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1200)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1200)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_lineSize_34166 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1202)) ;
      }
      inCompiler->printMessage (enumerator_35265.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1204))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1204)) ;
      var_lineSize_34166.plusAssign_operation(enumerator_35265.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1205)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1205)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1205)) ;
      enumerator_35265.gotoNextObject () ;
      if (enumerator_35265.hasCurrentObject () && bool_6) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1207)) ;
        var_lineSize_34166.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1208)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1210)) ;
  }
  inCompiler->printMessage (var_delimitor_33729  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1212)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLibrariesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLibrariesInstruction.mSlotID,
                                extensionMethod_gtlLibrariesInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLibrariesInstruction_execute (defineExtensionMethod_gtlLibrariesInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlSetterCallInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSetterCallInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                              GALGAS_gtlContext & /* ioArgument_context */,
                                                              GALGAS_gtlData & ioArgument_vars,
                                                              GALGAS_library & ioArgument_lib,
                                                              GALGAS_string & /* ioArgument_outputString */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetterCallInstruction * object = (const cPtr_gtlSetterCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetterCallInstruction) ;
  GALGAS_gtlDataList var_dataArguments_36099 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 1230)) ;
  cEnumerator_gtlExpressionList enumerator_36134 (object->mAttribute_arguments, kEnumeration_up) ;
  while (enumerator_36134.hasCurrentObject ()) {
    var_dataArguments_36099.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_36134.current_expression (HERE).ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1232))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1232)) ;
    enumerator_36134.gotoNextObject () ;
  }
  GALGAS_gtlData var_targetData_36216 = extensionGetter_get (object->mAttribute_target, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1234)) ;
  {
  var_targetData_36216.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_36258 = (cPtr_gtlData *) var_targetData_36216.ptr () ;
  callExtensionSetter_performSetter ((cPtr_gtlData *) ptr_36258, object->mAttribute_setterName, var_dataArguments_36099, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1235)) ;
  }
  extensionMethod_set (object->mAttribute_target, ioArgument_vars, ioArgument_lib, var_targetData_36216, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1236)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSetterCallInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlSetterCallInstruction.mSlotID,
                                extensionMethod_gtlSetterCallInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSetterCallInstruction_execute (defineExtensionMethod_gtlSetterCallInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlInputStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInputStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInputStatementInstruction * object = (const cPtr_gtlInputStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInputStatementInstruction) ;
  cEnumerator_gtlArgumentList enumerator_36858 (object->mAttribute_formalArguments, kEnumeration_up) ;
  while (enumerator_36858.hasCurrentObject ()) {
    GALGAS_gtlData var_arg_36913 ;
    {
    ioArgument_context.insulate (HERE) ;
    cPtr_gtlContext * ptr_36876 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
    callExtensionSetter_popFirstInputArg ((cPtr_gtlContext *) ptr_36876, enumerator_36858.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1253)), var_arg_36913, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1253)) ;
    }
    const enumGalgasBool test_0 = enumerator_36858.current_typed (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_36858.current_type (HERE).objectCompare (var_arg_36913.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1255)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_arg_36913.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)), GALGAS_string ("mistyped argument, ").add_operation (extensionGetter_typeName (var_arg_36913.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1256)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1256)) ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_36858.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1257)), extensionGetter_typeName (enumerator_36858.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1257)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1257)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1257)) ;
      }
    }
    {
    ioArgument_vars.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_37140 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_37140, enumerator_36858.current_name (HERE), var_arg_36913, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1260)) ;
    }
    enumerator_36858.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInputStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlInputStatementInstruction.mSlotID,
                                extensionMethod_gtlInputStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInputStatementInstruction_execute (defineExtensionMethod_gtlInputStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct overrideMap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlStruct_overrideMap (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_mapOverriden = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 35)), GALGAS_gtlVarMap::constructor_mapWithMapToOverride (object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 36))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 33)) ;
//---
  return result_mapOverriden ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_overrideMap (void) {
  enterExtensionGetter_overrideMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_overrideMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_overrideMap (defineExtensionGetter_gtlStruct_overrideMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct overriddenMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlStruct_overriddenMap (const cPtr_gtlData * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_overriddenMap = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)), object->mAttribute_value.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)) ;
//---
  return result_overriddenMap ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_overriddenMap (void) {
  enterExtensionGetter_overriddenMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_overriddenMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_overriddenMap (defineExtensionGetter_gtlStruct_overriddenMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlVarItemField location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlVarItemField_location (const cPtr_gtlVarItem * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_loc = object->mAttribute_field.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 150)) ;
//---
  return result_loc ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                 extensionGetter_gtlVarItemField_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_location (defineExtensionGetter_gtlVarItemField_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@gtlVarItemField stringPath'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemField_stringPath (const cPtr_gtlVarItem * inObject,
                                                                 const GALGAS_gtlData & /* constinArgument_vars */,
                                                                 const GALGAS_library & /* constinArgument_lib */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 158)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                   extensionGetter_gtlVarItemField_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_stringPath (defineExtensionGetter_gtlVarItemField_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlVarItemField setInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemField_setInContext (const cPtr_gtlVarItem * inObject,
                                                          GALGAS_gtlData & ioArgument_context,
                                                          const GALGAS_gtlData constinArgument_vars,
                                                          const GALGAS_library constinArgument_lib,
                                                          const GALGAS_gtlVarPath constinArgument_path,
                                                          const GALGAS_gtlData constinArgument_newData,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 177)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_context.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_5370 = (cPtr_gtlData *) ioArgument_context.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5370, object->mAttribute_field, constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_gtlData var_data_5456 ;
    callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_5456, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 181)) ;
    callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 182)).ptr (), var_data_5456, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 186)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 182)) ;
    {
    ioArgument_context.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_5603 = (cPtr_gtlData *) ioArgument_context.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5603, object->mAttribute_field, var_data_5456, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 189)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemField_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionMethod_gtlVarItemField_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemField_setInContext (defineExtensionMethod_gtlVarItemField_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlVarItemField getInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemField_getInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlData & constinArgument_context,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    const GALGAS_gtlVarPath & constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  GALGAS_gtlData var_data_6064 ;
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_data_6064, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 203)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_data_6064 ;
  }else if (kBoolFalse == test_0) {
    result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 207)).ptr (), var_data_6064, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 207)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionGetter_gtlVarItemField_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_getInContext (defineExtensionGetter_gtlVarItemField_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemField existsInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemField_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlData & constinArgument_context,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    const GALGAS_gtlVarPath & constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 226)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_gtlData var_subContext_6783 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_subContext_6783, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 230)) ;
      result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 231)).ptr (), var_subContext_6783, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 231)) ;
    }
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionGetter_gtlVarItemField_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_existsInContext (defineExtensionGetter_gtlVarItemField_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlVarItemField deleteInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemField_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                             GALGAS_gtlData & ioArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             const GALGAS_gtlVarPath constinArgument_path,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 252)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_7422 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_deleteStructField ((cPtr_gtlData *) ptr_7422, object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 254)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_gtlData var_data_7506 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_7506, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 256)) ;
      callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 257)).ptr (), var_data_7506, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 257)) ;
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_7655 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_7655, object->mAttribute_field, var_data_7506, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 263)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemField_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionMethod_gtlVarItemField_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemField_deleteInContext (defineExtensionMethod_gtlVarItemField_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemCollection stringPath'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                      const GALGAS_gtlData & constinArgument_vars,
                                                                      const GALGAS_library & constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  result_result = object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 278)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 278)) ;
  GALGAS_gtlData var_keyValue_8153 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 279)) ;
  if (var_keyValue_8153.isValid ()) {
    if (var_keyValue_8153.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_8224_keyString ((cPtr_gtlString *) var_keyValue_8153.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_8224_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)) ;
    }else if (var_keyValue_8153.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_8288_keyInt ((cPtr_gtlInt *) var_keyValue_8153.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_8288_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 284)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 286)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                   extensionGetter_gtlVarItemCollection_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_stringPath (defineExtensionGetter_gtlVarItemCollection_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlVarItemCollection setInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                               GALGAS_gtlData & ioArgument_context,
                                                               const GALGAS_gtlData constinArgument_vars,
                                                               const GALGAS_library constinArgument_lib,
                                                               const GALGAS_gtlVarPath constinArgument_path,
                                                               const GALGAS_gtlData constinArgument_newData,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_8787_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)) ;
      GALGAS_gtlData var_data_8873 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 302)) ;
      var_data_8873 = function_wantGtlMap (var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 303)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 304)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_data_8873.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_8948 = (cPtr_gtlData *) var_data_8873.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_8948, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 305)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 305)) ;
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_9041 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_8873.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 307)), var_subContext_9041, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 307)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 308)).ptr (), var_subContext_9041, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 312)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 308)) ;
        {
        var_data_8873.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9207 = (cPtr_gtlData *) var_data_8873.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_9207, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 315)), var_subContext_9041, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 315)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_9265 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_9265, object->mAttribute_field, var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 317)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_9319_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)) ;
      GALGAS_gtlData var_data_9405 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 320)) ;
      var_data_9405 = function_wantGtlList (var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 321)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 322)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_data_9405.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9481 = (cPtr_gtlData *) var_data_9405.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_9481, constinArgument_newData, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 323)) ;
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_9568 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_9405.ptr (), var_subContext_9568, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 325)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 326)).ptr (), var_subContext_9568, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 330)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 326)) ;
        {
        var_data_9405.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9742 = (cPtr_gtlData *) var_data_9405.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_9742, var_subContext_9568, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 333)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_9801 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_9801, object->mAttribute_field, var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 335)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 337)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 337)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionMethod_gtlVarItemCollection_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemCollection_setInContext (defineExtensionMethod_gtlVarItemCollection_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@gtlVarItemCollection getInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_context,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         const GALGAS_gtlVarPath & constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  GALGAS_gtlData var_collection_10322 ;
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_collection_10322, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 351)) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_10383_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 354)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10322.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_10383_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 355)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 355)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_10528 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10322.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_10383_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 357)), var_subContext_10528, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 357)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 358)).ptr (), var_subContext_10528, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 358)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_10704_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).ptr ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10322.ptr (), result_result, cast_10704_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 367)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_10843 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10322.ptr (), var_subContext_10843, cast_10704_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 369)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 370)).ptr (), var_subContext_10843, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 370)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionGetter_gtlVarItemCollection_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_getInContext (defineExtensionGetter_gtlVarItemCollection_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlVarItemCollection existsInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_context,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         const GALGAS_gtlVarPath & constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 393)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlData var_collection_11565 ;
    callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_collection_11565, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 394)) ;
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).isValid ()) {
      if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
        GALGAS_gtlString cast_11630_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).ptr ()) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 398)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 400)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_gtlData var_subContext_11840 ;
            callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 401)), var_subContext_11840, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 401)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 402)).ptr (), var_subContext_11840, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 402)) ;
          }else if (kBoolFalse == test_2) {
            result_result = GALGAS_bool (false) ;
          }
        }
      }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
        GALGAS_gtlInt cast_12097_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).ptr ()) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 414)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 416)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_gtlData var_subContext_12302 ;
            callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), var_subContext_12302, cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 417)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 418)).ptr (), var_subContext_12302, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 418)) ;
          }else if (kBoolFalse == test_4) {
            result_result = GALGAS_bool (false) ;
          }
        }
      }else{
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 429)), GALGAS_string ("string ot int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 429)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionGetter_gtlVarItemCollection_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_existsInContext (defineExtensionGetter_gtlVarItemCollection_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlVarItemCollection deleteInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_13071_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).ptr ()) ;
      const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 447)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_gtlData var_data_13165 ;
        callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_13165, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 448)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          const enumGalgasBool test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_data_13165.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 450)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_data_13165.insulate (HERE) ; // §ABSTRACT
            cPtr_gtlData * ptr_13262 = (cPtr_gtlData *) var_data_13165.ptr () ;
            callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_13262, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 451)) ;
            }
          }
        }else if (kBoolFalse == test_1) {
          GALGAS_gtlData var_subContext_13365 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_13165.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 454)), var_subContext_13365, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 454)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 455)).ptr (), var_subContext_13365, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 455)) ;
          {
          var_data_13165.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_13531 = (cPtr_gtlData *) var_data_13165.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_13531, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 461)), var_subContext_13365, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 461)) ;
          }
        }
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_13593 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_13593, object->mAttribute_field, var_data_13165, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 463)) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_13655_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).ptr ()) ;
      const enumGalgasBool test_3 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 466)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_gtlData var_data_13749 ;
        callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_13749, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 467)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_data_13749.ptr (), cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 469)).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_data_13749.insulate (HERE) ; // §ABSTRACT
            cPtr_gtlData * ptr_13847 = (cPtr_gtlData *) var_data_13749.ptr () ;
            callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_13847, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 470)) ;
            }
          }
        }else if (kBoolFalse == test_4) {
          GALGAS_gtlData var_subContext_13944 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_13749.ptr (), var_subContext_13944, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 473)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).ptr (), var_subContext_13944, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)) ;
          {
          var_data_13749.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_14118 = (cPtr_gtlData *) var_data_13749.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_14118, var_subContext_13944, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 480)) ;
          }
        }
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_14181 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_14181, object->mAttribute_field, var_data_13749, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 482)) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 485)), GALGAS_string ("string ot int expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 485)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionMethod_gtlVarItemCollection_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemCollection_deleteInContext (defineExtensionMethod_gtlVarItemCollection_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemSubCollection location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlVarItemSubCollection_location (const cPtr_gtlVarItem * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_loc = object->mAttribute_subCollectionlocation ;
//---
  return result_loc ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                 extensionGetter_gtlVarItemSubCollection_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_location (defineExtensionGetter_gtlVarItemSubCollection_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@gtlVarItemSubCollection stringPath'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemSubCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_result = GALGAS_string ("[") ;
  GALGAS_gtlData var_keyValue_14910 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 512)) ;
  if (var_keyValue_14910.isValid ()) {
    if (var_keyValue_14910.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_14981_keyString ((cPtr_gtlString *) var_keyValue_14910.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_14981_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)) ;
    }else if (var_keyValue_14910.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_15045_keyInt ((cPtr_gtlInt *) var_keyValue_14910.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_15045_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 517)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 519)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                   extensionGetter_gtlVarItemSubCollection_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_stringPath (defineExtensionGetter_gtlVarItemSubCollection_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlVarItemSubCollection setInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemSubCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  const GALGAS_gtlData constinArgument_newData,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_15550_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).ptr ()) ;
      ioArgument_context = function_wantGtlMap (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 534)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 535)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_15634 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_15634, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 536)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 536)) ;
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_15730 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 538)), var_subContext_15730, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 538)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 539)).ptr (), var_subContext_15730, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 543)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 539)) ;
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_15899 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_15899, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 546)), var_subContext_15730, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 546)) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_15967_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).ptr ()) ;
      ioArgument_context = function_wantGtlList (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 549)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 550)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_16052 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_16052, constinArgument_newData, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 551)) ;
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_16142 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_16142, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 553)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 554)).ptr (), var_subContext_16142, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 558)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 554)) ;
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_16319 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_16319, var_subContext_16142, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 561)) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 564)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 564)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemSubCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionMethod_gtlVarItemSubCollection_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_setInContext (defineExtensionMethod_gtlVarItemSubCollection_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlVarItemSubCollection getInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemSubCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlData & constinArgument_context,
                                                                            const GALGAS_gtlData & constinArgument_vars,
                                                                            const GALGAS_library & constinArgument_lib,
                                                                            const GALGAS_gtlVarPath & constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_16867_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 580)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16867_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 581)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 581)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_17006 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16867_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 583)), var_subContext_17006, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 583)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 584)).ptr (), var_subContext_17006, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 584)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_17182_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).ptr ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 592)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), result_result, cast_17182_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 593)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_17315 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_17315, cast_17182_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 595)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 596)).ptr (), var_subContext_17315, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 596)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 604)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 604)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionGetter_gtlVarItemSubCollection_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_getInContext (defineExtensionGetter_gtlVarItemSubCollection_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlVarItemSubCollection existsInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemSubCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlData & constinArgument_context,
                                                                            const GALGAS_gtlData & constinArgument_vars,
                                                                            const GALGAS_library & constinArgument_lib,
                                                                            const GALGAS_gtlVarPath & constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_18007_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 620)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 621)) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 623)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlData var_subContext_18198 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 624)), var_subContext_18198, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 624)) ;
          result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 625)).ptr (), var_subContext_18198, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 625)) ;
        }else if (kBoolFalse == test_1) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_18433_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).ptr ()) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 636)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 637)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 639)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_subContext_18619 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_18619, cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 640)) ;
          result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 641)).ptr (), var_subContext_18619, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 641)) ;
        }else if (kBoolFalse == test_3) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 652)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 652)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionGetter_gtlVarItemSubCollection_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_existsInContext (defineExtensionGetter_gtlVarItemSubCollection_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@gtlVarItemSubCollection deleteInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemSubCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                     GALGAS_gtlData & ioArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     const GALGAS_gtlVarPath constinArgument_path,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_19336_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).ptr ()) ;
      const enumGalgasBool test_0 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 667)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 668)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19433 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_19433, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 669)) ;
          }
        }else if (kBoolFalse == test_1) {
          GALGAS_gtlData var_subContext_19527 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 671)), var_subContext_19527, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 671)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 672)).ptr (), var_subContext_19527, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 672)) ;
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19696 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_19696, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 678)), var_subContext_19527, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 678)) ;
          }
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_19774_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).ptr ()) ;
      const enumGalgasBool test_2 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 682)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 683)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19872 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_19872, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 684)) ;
          }
        }else if (kBoolFalse == test_3) {
          GALGAS_gtlData var_subContext_19960 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_19960, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 686)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 687)).ptr (), var_subContext_19960, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 687)) ;
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_20137 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_20137, var_subContext_19960, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 693)) ;
          }
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 697)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 697)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemSubCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionMethod_gtlVarItemSubCollection_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_deleteInContext (defineExtensionMethod_gtlVarItemSubCollection_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlTerminal eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlTerminal_eval (const cPtr_gtlExpression * inObject,
                                                        const GALGAS_gtlData & /* constinArgument_vars */,
                                                        const GALGAS_library & /* constinArgument_lib */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlTerminal * object = (const cPtr_gtlTerminal *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTerminal) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlTerminal_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlTerminal.mSlotID,
                             extensionGetter_gtlTerminal_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlTerminal_eval (defineExtensionGetter_gtlTerminal_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlVarRef eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarRef_eval (const cPtr_gtlExpression * inObject,
                                                      const GALGAS_gtlData & constinArgument_vars,
                                                      const GALGAS_library & constinArgument_lib,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarRef * object = (const cPtr_gtlVarRef *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarRef) ;
  result_result = extensionGetter_get (object->mAttribute_variableName, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 878)) ;
  {
  result_result.setter_setWhere (object->mAttribute_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 879)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarRef_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlVarRef.mSlotID,
                             extensionGetter_gtlVarRef_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarRef_eval (defineExtensionGetter_gtlVarRef_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlParenthesizedExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlParenthesizedExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlData & constinArgument_vars,
                                                                       const GALGAS_library & constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlParenthesizedExpression * object = (const cPtr_gtlParenthesizedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlParenthesizedExpression) ;
  result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 894)) ;
  {
  result_result.setter_setWhere (object->mAttribute_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 895)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlParenthesizedExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlParenthesizedExpression.mSlotID,
                             extensionGetter_gtlParenthesizedExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlParenthesizedExpression_eval (defineExtensionGetter_gtlParenthesizedExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlMinusExpression eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMinusExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlData & constinArgument_vars,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMinusExpression * object = (const cPtr_gtlMinusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMinusExpression) ;
  result_result = callExtensionGetter_minusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 908)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 908)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMinusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMinusExpression.mSlotID,
                             extensionGetter_gtlMinusExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMinusExpression_eval (defineExtensionGetter_gtlMinusExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlPlusExpression eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlPlusExpression_eval (const cPtr_gtlExpression * inObject,
                                                              const GALGAS_gtlData & constinArgument_vars,
                                                              const GALGAS_library & constinArgument_lib,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlPlusExpression * object = (const cPtr_gtlPlusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPlusExpression) ;
  result_result = callExtensionGetter_plusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 921)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 921)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlPlusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlPlusExpression.mSlotID,
                             extensionGetter_gtlPlusExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlPlusExpression_eval (defineExtensionGetter_gtlPlusExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlNotExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlNotExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlNotExpression * object = (const cPtr_gtlNotExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotExpression) ;
  result_result = callExtensionGetter_notOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 934)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 934)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlNotExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlNotExpression.mSlotID,
                             extensionGetter_gtlNotExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlNotExpression_eval (defineExtensionGetter_gtlNotExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlAddExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlAddExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlAddExpression * object = (const cPtr_gtlAddExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAddExpression) ;
  result_result = callExtensionGetter_addOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 949)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 949)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlAddExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAddExpression.mSlotID,
                             extensionGetter_gtlAddExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlAddExpression_eval (defineExtensionGetter_gtlAddExpression_eval, NULL) ;

