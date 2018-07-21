#ifndef EASYGO_DECL_EXPORT_H
#define EASYGO_DECL_EXPORT_H

// #pragma warning( disable: 4251 )

// ��easygo��Ϊ����˵�����ʹ�ñ�ͷ�ļ�����ĺꡣ
//		
// 1. easygoΪ��̬�⣬��easygo���ͷ�ļ��������ºꡣEXAMPLE_DECL���ڵ���������
//		��EXPORT_EASYGO����Ҫ��easygo�����Ŀ�ļ��ж��塣
//		
//		#ifndef EASYGO_DECL
//		#	ifdef EXPORT_EASYGO
//		#		define EASYGO_DECL COMTOP_DECL_EXPORT
//		#	else
//		#		define EASYGO_DECL COMTOP_DECL_IMPORT
//		#	endif
//		#endif
//		
// 2. easygoΪ��̬�⣬��easygo���ͷ�ļ��������ºꡣEASYGO_DECL���ڵ���������
//		
//		#ifndef EASYGO_DECL
//		#	define EASYGO_DECL 
//		#endif
//		
// 3. easygo�ɵ�����̬��͹���⣬��easygo���ͷ�ļ��������ºꡣEASYGO_DECL����
//		������������EXPORT_EASYGO����Ҫ��easygo�����Ŀ�ļ��ж��塣���easygo��
//		��Ҫ����Ϊ��̬�⣬����Ҫ����Ŀ�ļ�����EASYGO_DYN_LINK����ʹ��easygo��Ĺ�
//		��Ҳ��Ҫ����EASYGO_DYN_LINK�����ַ�ʽ��ʵ������������ַ�ʽ��
//		
//		#ifndef EASYGO_DECL
//		#	ifdef EASYGO_DYN_LINK
//		#		ifdef EXPORT_EASYGO
//		#			define EASYGO_DECL COMTOP_DECL_EXPORT
//		#		else
//		#			define EASYGO_DECL COMTOP_DECL_IMPORT
//		#		endif
//		#	else
//		#		define EASYGO_DECL 
//		#	endif
//		#endif
//		


#ifndef EASYGO_DECL_EXPORT
#  if defined(_MSC_VER)
#    define EASYGO_DECL_EXPORT __declspec(dllexport)
#  elif defined(__GNUC__)
#    define EASYGO_DECL_EXPORT __attribute__((visibility("default")))
#  else
#    error   "Unknown Operation System!"
#  endif
#endif

#ifndef EASYGO_DECL_IMPORT
#  if defined(_MSC_VER)
#    define EASYGO_DECL_IMPORT __declspec(dllimport)
#  else
#    define EASYGO_DECL_IMPORT
#  endif
#endif

#endif
