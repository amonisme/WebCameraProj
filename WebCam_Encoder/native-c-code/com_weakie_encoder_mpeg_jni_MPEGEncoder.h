/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_weakie_encoder_mpeg_jni_MPEGEncoder */

#ifndef _Included_com_weakie_encoder_mpeg_jni_MPEGEncoder
#define _Included_com_weakie_encoder_mpeg_jni_MPEGEncoder
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_weakie_encoder_mpeg_jni_MPEGEncoder
 * Method:    register
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_weakie_encoder_mpeg_jni_MPEGEncoder_register
  (JNIEnv *, jclass);

/*
 * Class:     com_weakie_encoder_mpeg_jni_MPEGEncoder
 * Method:    init
 * Signature: (II)L
 */
JNIEXPORT jlong JNICALL Java_com_weakie_encoder_mpeg_jni_MPEGEncoder_init
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     com_weakie_encoder_mpeg_jni_MPEGEncoder
 * Method:    encode
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT jint JNICALL Java_com_weakie_encoder_mpeg_jni_MPEGEncoder_encode
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     com_weakie_encoder_mpeg_jni_MPEGEncoder
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_weakie_encoder_mpeg_jni_MPEGEncoder_destroy
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
