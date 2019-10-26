using UnityEngine;
using UnityEngine.XR.MagicLeap;


public class PrivilegeHandler : MonoBehaviour
{

    private PrivilegeRequester _privilegeRequester; // This should also exist on this gameObject


    void Awake()
    {
        _privilegeRequester = GetComponent<PrivilegeRequester>();
        if (_privilegeRequester == null)
        {
            Debug.LogError("Missing PrivilegeRequester component");
            enabled = false;
            return;
        }

        _privilegeRequester.OnPrivilegesDone += HandlePrivilegesDone;
    }


    void OnDestroy()
    {
        if (_privilegeRequester != null)
        {
            _privilegeRequester.OnPrivilegesDone -= HandlePrivilegesDone;
        }
    }


    void HandlePrivilegesDone(MLResult result)
    {
        if (!result.IsOk)
        {
            Debug.LogError("Failed to get all requested privileges. MLResult: " + result);
            enabled = false;
            return;
        }

        Debug.Log("Now it is safe to start functionality that required Sensitive privilege");
        //GetComponent<ScriptThatRequiresSensitivePrivilegeFunctionality>().enabled = true;
    }
}
