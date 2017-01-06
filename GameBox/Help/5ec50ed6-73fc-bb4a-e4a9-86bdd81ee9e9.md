# TableStream Class
 

\[Missing <summary> documentation for "T:GameBox.Framework.TableStream"\]


## Inheritance Hierarchy
<a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">System.Object</a><br />&nbsp;&nbsp;<a href="2f732106-c1d3-cfc7-e9bd-96254f667f0a">GameBox.Framework.C0</a><br />&nbsp;&nbsp;&nbsp;&nbsp;GameBox.Framework.TableStream<br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="e038a4d3-fe60-7cd5-3c50-31190a3dbc88">GameBox.Framework.TableStreamAsyncReader</a><br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="10d344c4-9264-e9ac-416b-eba0fb18151a">GameBox.Framework.TableStreamReader</a><br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="44e22804-9fc2-a91c-fe5b-5cd24a589d73">GameBox.Framework.TableStreamWriter</a><br />
**Namespace:**&nbsp;<a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework</a><br />**Assembly:**&nbsp;ServiceCenter (in ServiceCenter.dll) Version: 1.0.0.0 (1.0.0.0)

## Syntax

**C#**<br />
``` C#
public abstract class TableStream : C0
```

The TableStream type exposes the following members.


## Constructors
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="f574ec3e-512c-48d9-f788-1bfec538f885">TableStream</a></td><td>
Initializes a new instance of the TableStream class</td></tr></table>&nbsp;
<a href="#tablestream-class">Back to Top</a>

## Properties
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Protected property](media/protproperty.gif "Protected property")</td><td><a href="7443769e-16af-219c-76d9-d9d83e207971">Length</a></td><td></td></tr><tr><td>![Protected property](media/protproperty.gif "Protected property")</td><td><a href="c47f24bb-1b3b-7862-b4cc-72ae81d1718f">Position</a></td><td></td></tr><tr><td>![Protected property](media/protproperty.gif "Protected property")</td><td><a href="35a6b71d-4892-8afd-9fca-637d1e3d06a8">RuntimeId</a></td><td>
运行时Id。
 (Inherited from <a href="2f732106-c1d3-cfc7-e9bd-96254f667f0a">C0</a>.)</td></tr></table>&nbsp;
<a href="#tablestream-class">Back to Top</a>

## Methods
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="387e72ae-dd07-65ff-288a-2498adc1a921">Blob</a></td><td></td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="9a2ca8c0-3388-86a7-bffa-371e4a82f13f">Dispose</a></td><td>
Releases all resources used by the TableStream
 (Overrides <a href="6f1cd657-ebcb-6541-cc94-2d52ac09088b">C0.Dispose()</a>.)</td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/bsc2ak47" target="_blank">Equals</a></td><td>
Determines whether the specified <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a> is equal to the current <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr><tr><td>![Protected method](media/protmethod.gif "Protected method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/4k87zsw7" target="_blank">Finalize</a></td><td>
Allows an object to try to free resources and perform other cleanup operations before it is reclaimed by garbage collection.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr><tr><td>![Protected method](media/protmethod.gif "Protected method")</td><td><a href="65ded753-4fc5-85cf-65bf-7248250b5f3f">GenerateKey</a></td><td></td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/zdee4b3y" target="_blank">GetHashCode</a></td><td>
Serves as a hash function for a particular type.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/dfwy45w9" target="_blank">GetType</a></td><td>
Gets the type of the current instance.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr><tr><td>![Protected method](media/protmethod.gif "Protected method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/57ctke0a" target="_blank">MemberwiseClone</a></td><td>
Creates a shallow copy of the current <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr><tr><td>![Protected method](media/protmethod.gif "Protected method")</td><td><a href="3aa5b2d4-9552-8fb2-7ae9-f7851a36525b">Seek</a></td><td></td></tr><tr><td>![Public method](media/pubmethod.gif "Public method")</td><td><a href="http://msdn2.microsoft.com/zh-cn/library/7bxwbwt2" target="_blank">ToString</a></td><td>
Returns a string that represents the current object.
 (Inherited from <a href="http://msdn2.microsoft.com/zh-cn/library/e5kfa45b" target="_blank">Object</a>.)</td></tr></table>&nbsp;
<a href="#tablestream-class">Back to Top</a>

## Fields
&nbsp;<table><tr><th></th><th>Name</th><th>Description</th></tr><tr><td>![Protected field](media/protfield.gif "Protected field")</td><td><a href="13902ce2-6bcd-65c5-0a04-e89bc7306f56">keyMap</a></td><td /></tr><tr><td>![Protected field](media/protfield.gif "Protected field")</td><td><a href="1cb69096-09d7-058c-ff92-8701601ff964">keyStack</a></td><td /></tr></table>&nbsp;
<a href="#tablestream-class">Back to Top</a>

## See Also


#### Reference
<a href="a8957fe6-9cc0-3a6d-cd5c-a2a246efee1e">GameBox.Framework Namespace</a><br />