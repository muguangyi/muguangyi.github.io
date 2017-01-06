# EventTriggerUtility.Remove Method 
 

为指定的EventTrigger删除指定EventTriggerType类型的响应函数。

**Namespace:**&nbsp;<a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework</a><br />**Assembly:**&nbsp;ServiceCenter (in ServiceCenter.dll) Version: 1.0.0.0 (1.0.0.0)

## Syntax

**C#**<br />
``` C#
public static void Remove(
	EventTrigger target,
	EventTriggerType type,
	UnityAction<BaseEventData> action
)
```


#### Parameters
&nbsp;<dl><dt>target</dt><dd>Type: EventTrigger<br />EventTrigger的目标。</dd><dt>type</dt><dd>Type: EventTriggerType<br />EventTrigger类型。</dd><dt>action</dt><dd>Type: UnityAction(BaseEventData)<br />处理函数句柄。</dd></dl>

## See Also


#### Reference
<a href="9a3d38ce-6d92-e5ee-78c6-a02b7213cddf">EventTriggerUtility Class</a><br /><a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework Namespace</a><br />