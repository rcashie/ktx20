LOCAL_PATH := $(call my-dir)
MY_SOURCE_PATH := $(LOCAL_PATH)/../..
include $(CLEAR_VARS)

LOCAL_MODULE := ktx

LOCAL_SRC_FILES := \
	$(wildcard $(MY_SOURCE_PATH)/lib/*.c) \
	$(wildcard $(MY_SOURCE_PATH)/lib/*.cxx) \

LOCAL_C_INCLUDES := $(MY_SOURCE_PATH)/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES)

LOCAL_CFLAGS += -DKTX_OPENGL_ES2=1 -fstack-protector

LOCAL_LDLIBS := -lGLESv1_CM -lGLESv2

include $(BUILD_SHARED_LIBRARY)