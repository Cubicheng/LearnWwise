using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StarterAssets;

public class StairFootStepTrigger : MonoBehaviour
{
    [Tooltip("进入触发器时设置的 footStepDeltaTime 值")]
    public float stairFootstepDeltaTime = 0.5f;

    private void OnTriggerEnter(Collider other)
    {
        // 检查进入触发器的是否是玩家
        FirstPersonController player = other.GetComponent<FirstPersonController>();
        if (player != null)
        {
            player.footStepDeltaTime = stairFootstepDeltaTime;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        // 检查离开触发器的是否是玩家
        FirstPersonController player = other.GetComponent<FirstPersonController>();
        if (player != null)
        {
            player.footStepDeltaTime = FirstPersonController.defaultFootstepDeltaTime;
        }
    }
}